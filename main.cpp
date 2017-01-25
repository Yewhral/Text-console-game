#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;


// section for calling functions from other file
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
void textAct1(string playerName, bool playerGender);
void displayStats(std::string playerName, int playerMinDmg, int playerMaxDmg, int playerHealth);

//actual program

int main(int argc, char** argv) {
	
	setFontSize(18);			//text size display size
	char mainMenu;				//whole program loop configuration
	int mainProgramLoop=2;
	
	int playerClass=0;			//player statistics
	int playerMinDmg=0;
	int playerMaxDmg=0;
	int playerHealth=0;
	int playerGender=0;
	std::string playerName;
	int pause=0;

	do{
	
	menuText();
	cin>>mainMenu;
	switch(mainMenu){
		case '1':
			//game logic goes here
			playerNameChoice();
				cin>>playerName;
				cout<<endl;
			playerGenderChoice();
				cin>>playerGender;
				cout<<endl;
			playerClassChoice();
				cin>>playerClass;
			playerClassStats(playerName, playerClass, playerMinDmg, playerMaxDmg, playerHealth);
				textIntro();
				act(1);			//using function for displaying act number
				textAct1(playerName, playerGender);
			displayStats(playerName, playerMinDmg, playerMaxDmg, playerHealth);
			cin>>pause;

			break;
			
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
