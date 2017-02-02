#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "monster.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;


// section for calling functions from other files
void setFontSize(int fontSize);
void menuText();
void authorInfo();
void menuExit();
void programError();
void playerClassChoice();
void playerNameChoice();
void playerGenderChoice();
void playerClassStats(string playerName, int playerClass, int &playerMinDmg, int &playerMaxDmg, int &playerHealth, int &playerMaxHealth);
void displayStats(string playerName, int playerMinDmg, int playerMaxDmg, int playerHealth);
void textIntro();
void act(int actNumber);
void textAct1(string playerName, int playerGender);
void displayStats(std::string playerName, int playerMinDmg, int playerMaxDmg, int playerHealth);
void fightMenuText();
void gameEnd();
void heal(int playerClass);
void textAct11(int playerGender, string playerName);



//actual program

int main(int argc, char** argv) {
	
	setFontSize(18);			//text size display size
	char mainMenu;				//whole program loop configuration
	int mainProgramLoop=2;
	char fightMenuChar;				//fighting menu switch case 
	srand(time(NULL));			//randomness by time
	
	int playerClass=0;			//player statistics
	int playerMinDmg=0;
	int playerMaxDmg=0;
	int playerHealth=0;
	int playerGender=0;
	int playerHeal=0;
	int playerMaxHealth=0;
	string playerName;

	
	int pause=0;				//for pausing program at the end

	do{							//main program loop
	menuText();
	cin>>mainMenu;
	switch(mainMenu){			//game flow goes here
		case '1':
			{
			playerNameChoice();	
				cin.ignore(); 
				getline(cin,playerName);
				cout<<endl;
			playerGenderChoice();
			do{
				cin>>playerGender;
				cout<<endl;
				if(playerGender!=1 && playerGender!=2)cout<<"There are only 2 genders"<<endl;
			}while(playerGender!=1 && playerGender!=2);
			playerClassChoice();
				cin>>playerClass;
			playerClassStats(playerName, playerClass, playerMinDmg, playerMaxDmg, playerHealth, playerMaxHealth);
			textIntro();
			act(1);			// using function for displaying act number
			textAct1(playerName, playerGender);
		
			//FIGHTING BLOCK
			Monster thug("thug",1,20,50); // object from monster class
			thug.mobHp();		//so this sets enemy hp as an easily accessible variable
			displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
			thug.showStats(); 
			do{ 
				fightMenuText();
				cin>>fightMenuChar;
				switch(fightMenuChar){
					
						case '1':{
								thug.calculateHp(thug.monsterHp,playerMinDmg,playerMaxDmg);
								if(thug.monsterHp<=0){
									cout<<playerName<<" defeated his enemy!"<<endl<<endl; 
									break;}
								else{
								playerHealth-=thug.calculateDmg(thug.mobMinDmg(),thug.mobMaxDmg());
								if(playerHealth<=0){
									cout<<"You got killed by your opponent...";
									break;}
								displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
								thug.showStats(); 
						}
								break;
								}
								
						case '2':{
								playerHeal=rand()%5+10;
								playerHealth+=playerHeal; 
								heal(playerClass);
								if(playerHealth>playerMaxHealth){
									playerHealth=playerMaxHealth;
									cout<<"You got healed up to full health!"<<endl;
									}
								else{
									cout<<"You got healed for: "<<playerHeal<<endl;
								}
								playerHealth-=thug.calculateDmg(thug.mobMinDmg(),thug.mobMaxDmg());
								displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
								thug.showStats(); 
								break;
							}
							
						default:{
							cout<<"Try again"<<endl;
							break;
						}
				}
			}while(thug.monsterHp>0 && playerHealth>0);
			if(playerHealth<=0){
				gameEnd(); 
				break;
			}
	

			textAct11(playerGender, playerName);
					
			Monster spider("Spider",1,5,30); // object from monster class
			spider.mobHp();		//so this sets enemy hp as an easily accessible variable
			displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
			spider.showStats(); 
			do{ 
				fightMenuText();
				cin>>fightMenuChar;
				switch(fightMenuChar){
					
						case '1':{
								spider.calculateHp(spider.monsterHp,playerMinDmg,playerMaxDmg);
								if(spider.monsterHp<=0){
									cout<<playerName<<" defeated his enemy!"<<endl<<endl; 
									break;}
								else{
								playerHealth-=spider.calculateDmg(spider.mobMinDmg(),spider.mobMaxDmg());
								if(playerHealth<=0){
									cout<<"You got killed by your opponent...";
									break;}
								displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
								spider.showStats(); 
						}
								break;
								}
								
						case '2':{
								playerHeal=rand()%5+10;
								playerHealth+=playerHeal; 
								heal(playerClass);
								if(playerHealth>playerMaxHealth){
									playerHealth=playerMaxHealth;
									cout<<"You got healed up to full health!"<<endl;
									}
								else{
									cout<<"You got healed for: "<<playerHeal<<endl;
								}
								playerHealth-=spider.calculateDmg(spider.mobMinDmg(),spider.mobMaxDmg());
								displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
								spider.showStats(); 
								break;
							}
							
						default:{
							cout<<"Try again"<<endl;
							break;
						}
				}
			}while(spider.monsterHp>0 && playerHealth>0);
			if(playerHealth<=0){
				gameEnd(); 
				break;
			}
			
			cout<<"THAT'S ALL FOR NOW"<<endl;
			
			cin>>pause;

			break;
	}
		case '2':
			authorInfo();
			break;
			
		case '3':
			menuExit();
			mainProgramLoop=1;
			break;
			
		default:
			programError();
			break;
		}
	}while(mainProgramLoop>1);
	
	return 0;
}
