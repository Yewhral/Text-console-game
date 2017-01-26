#include "monster.h"
#include <iostream>



using std::cout;
using std::endl;

void monster::shout(){
	cout<<"yarr";	
}
void monster::showStats(){
	cout<<hp<<minDmg<<endl<<maxDmg<<endl;
}
