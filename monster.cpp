#include <iostream>
#include <windows.h>
#include "monster.h"

using std::endl;
using std::cout;

Monster::Monster(string n,int mind, int maxd,int h){
			name=n;
			hp=h;
			minDmg=mind;
			maxDmg=maxd;
			}
			
void Monster::showStats(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout<<name<<"'s";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	cout<<" stats: Health: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<hp;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	cout<<"| Damage: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout<<minDmg<<"-"<<maxDmg<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	}
Monster::~Monster(){

};


//////////////////////////////////////////hpcurrent hp=0 results in mob rip. can I make hpcurrent=hp?
