#include <iostream>
#include <ctime>
#include <cstdlib>
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
void playerClassStats(string playerName, int playerClass, int &playerMinDmg, int &playerMaxDmg, int &playerHealth);
void displayStats(string playerName, int playerMinDmg, int playerMaxDmg, int playerHealth);
void textIntro();
void act(int actNumber);
void textAct1(string playerName, int playerGender);
void displayStats(std::string playerName, int playerMinDmg, int playerMaxDmg, int playerHealth);
void fightMenuText();
void gameEnd();


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
	string playerName;

	
	int pause=0;				//for pausing program at the end

	do{							//main program loop
	menuText();
	cin>>mainMenu;
	switch(mainMenu){			//game flow goes here
		case '1':
			{
			playerNameChoice();	
				cin>>playerName;
				cout<<endl;
			playerGenderChoice();
			do{
				cin>>playerGender;
				cout<<endl;
				if(playerGender!=1 && playerGender!=2)cout<<"There are only 2 genders"<<endl;
			}while(playerGender!=1 && playerGender!=2);
			playerClassChoice();
				cin>>playerClass;
			playerClassStats(playerName, playerClass, playerMinDmg, playerMaxDmg, playerHealth);
			textIntro();
			act(1);			// using function for displaying act number
			textAct1(playerName, playerGender);
		
			//FIGHTING BLOCK
			Monster thug("thug",5,20,50); // object from monster class
			thug.mobHp();		//so this sets enemy hp as an easily accessible variable
			displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
			thug.showStats(); 
			do{
			//	displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
			//	thug.showStats(); 
				fightMenuText();
				cin>>fightMenuChar;
				switch(fightMenuChar){
						case '1':{
								//displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
								//thug.showStats(); 	// display stats from class 	//if(thug.mobHp()<0)  I MANAGED TO DO COMPARISION OF HP WITH SOMETHING ELSE OMG OMG OMG :D
								thug.calculateHp(thug.monsterHp,playerMinDmg,playerMaxDmg);
								if(thug.monsterHp<0){
									cout<<playerName<<" defeated his enemy!"<<endl; 
									break;}
								else{
								playerHealth-=thug.calculateDmg(thug.mobMinDmg(),thug.mobMaxDmg());
								if(playerHealth<0){
									cout<<"You got killed by your opponent...";
									gameEnd();
									break;}
								displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
								thug.showStats(); 
						}
								
								break;
								}
						case '2':{
								playerHeal=rand()%5+10;
								playerHealth+=playerHeal; // change for 10% of max hp later
								if(playerHealth>100){
									playerHealth=100;
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
							cout<<"try again";
							break;
						}
				}
			}while(thug.monsterHp>0 && playerHealth>0);
	
/*			while(thug.monsterHp>0 && playerHealth>0){
			playerHealth-=thug.calculateDmg(thug.mobMinDmg(),thug.mobMaxDmg());
			thug.calculateHp(thug.monsterHp,playerMinDmg,playerMaxDmg);
			thug.showStats();
		}
		*/
		
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
