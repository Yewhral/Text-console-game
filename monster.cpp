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
int Monster::mobHp(){
	 monsterHp=hp;
	 return monsterHp;
}
int Monster::mobMinDmg(){
	return minDmg;
}
int Monster::mobMaxDmg(){
	return maxDmg;
}
int Monster::calculateHp(int &monsterHp, int playerMinDmg, int playerMaxDmg){
	 int hit;
	 cout<<"You hit your enemy for: ";
	 hit=rand()%(playerMaxDmg-playerMinDmg)+playerMinDmg;
	 monsterHp-=hit;
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	 cout<<hit<<endl;
	 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	 return monsterHp;
}
int Monster::calculateDmg(int minDmg, int maxDmg){
	int dmg;
	cout<<"Enemy hits you for: "; 
	dmg=rand()%(maxDmg-minDmg)+minDmg;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout<<dmg<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	return dmg;
}
void Monster::showStats(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
	cout<<name<<"'s";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	cout<<" stats: Health: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
	cout<<monsterHp;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	cout<<"| Damage: ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY);
	cout<<minDmg<<"-"<<maxDmg<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE);
	}
Monster::~Monster(){

};
