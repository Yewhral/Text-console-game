#include <iostream>
#include <windows.h>


using std::cout;
using std::endl;
using std::string;


// displaying menu
void menuText(){
	cout<<"===[][*] MAIN MENU [*][]==="<<endl<<endl;
	cout.width(25);
	cout<<std::right<<"1 - Start a new game"<<endl;
	cout.width(25);
	cout<<std::right<<"2 - About the author"<<endl;
	cout.width(23);
	cout<<std::right<<"3 - Close the game"<<endl;
}
// returning an error
void programError(){
	cout<<"Please enter a proper number."<<endl<<endl;
}
// displaying author info
void authorInfo(){
	cout<<"I am Michal Zabrzyjewski and this is one of my first bigger projects written in C++ just for fun. I hope you will find this game fun and interesting.\nIf you want to contribute or have some tips for me - please contact me on GitHub\nCheers!"<<endl<<endl;
}
// ending game text
void menuExit(){
	cout<<endl<<"Thanks for playing!"<<endl;
}
//Player name choice text
void playerNameChoice(){
	cout<<"Please tell me your name: ";
}
//Player gender choice text
void playerGenderChoice(){
	cout<<"Are you a man or a woman?"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout<<"1 - I am a man!"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED|FOREGROUND_BLUE);
	cout<<"2 - I am a woman!"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
}
//Player class choice menu
void playerClassChoice(){
	cout<<"Pick your class:"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<"1 - Warrior o->===> | HP: 100 | Dmg: 10-20 |"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
	cout<<"2 - Ranger  o->===> | HP:  80 | Dmg: 5-30  |"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE|FOREGROUND_GREEN);
	cout<<"3 - Mage    o->===> | HP:  60 | Dmg: 0-50  |"<<endl<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
}
//Player class mechanics
void playerClassStats(std::string playerName, int playerClass,int &playerMinDmg, int &playerMaxDmg, int &playerHealth){	// passing value by reference 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED|FOREGROUND_GREEN);
	if(playerClass==1){
		cout<<playerName<<" became a strong warrior!"<<endl<<endl;
		playerMinDmg=10;
		playerMaxDmg=20;
		playerHealth=100;
	}
	else if(playerClass==2){
		cout<<playerName<<" became a swift ranger!"<<endl<<endl;
		playerMinDmg=5;
		playerMaxDmg=30;
		playerHealth=80;
	}
	else if(playerClass==3){
		cout<<playerName<<" became a crazy mage!"<<endl<<endl;
		playerMinDmg=0;
		playerMaxDmg=50;
		playerHealth=60;
	}
	else{
		cout<<"you are a peasant. Good luck."<<endl<<endl;
		playerMinDmg=0;
		playerMaxDmg=5;
		playerHealth=10;
	}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
}
// Display stats
void displayStats(string playerName, int playerMinDmg, int playerMaxDmg, int playerHealth){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout<<endl<<playerName<<"'s";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	cout<<" stats: Health: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<playerHealth;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	cout<<"| Damage: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout<<playerMinDmg<<"-"<<playerMaxDmg<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
}

void gameEnd(){
	cout<<"===GAME END==="<<endl<<endl;
}














// ACT NUMBER DISPLAYER
void act(int actNumber){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED);

	cout<<"=+=+=+= Act ";
	while(actNumber>0){
		cout<<"I";
		actNumber--;
	}
	cout<<" =+=+=+="<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
}
// PREVENTS FROM CONSOLE FONT BEING TOO LOW
void setFontSize(int fontSize)
{
    CONSOLE_FONT_INFOEX info = {0};
    info.cbSize       = sizeof(info);
    info.dwFontSize.Y = fontSize; // leave X as zero
    info.FontWeight   = FW_NORMAL;
    wcscpy(info.FaceName, L"Lucida Console");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE),TRUE,&info);
}


	
