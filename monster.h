#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>


using std::string;
using std::cout;
using std::endl;

class Monster{
   private:
	int hp;
	int minDmg;
	int maxDmg;
	string name;
	
   public:
	Monster(string,int,int,int);
	~Monster();
	void showStats();
	int monsterHp;
	int mobHp();
	int mobMinDmg();
	int mobMaxDmg();
	int calculateHp(int &monsterHp, int,int);
	int calculateDmg(int minDmg, int MaxDmg);	
	
};

		



#endif
