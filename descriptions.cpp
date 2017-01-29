#include <iostream>
#include <windows.h>


using std::cout;
using std::endl;
using std::string;

void textIntro(){
//	int x=2000;
	int x=0;
	cout<<"*This day was fun.* You thought while falling asleep on your bed."<<endl;
	Sleep(x);
	cout<<"Today you have finally got your SODER licence."<<endl;
	Sleep(x);
	cout<<"It's a big thing, you know?"<<endl;
	Sleep(x);
	cout<<"You always wanted to be an adventurer and fight with monsters."<<endl;
	Sleep(x);
	cout<<"You wanted to be the greatest explorer of Landburn."<<endl;
	Sleep(x);
	cout<<"Tomorrow you can finally prove yourself."<<endl;
	Sleep(x);
	cout<<"Tomorrow you will show them!"<<endl<<endl;
	Sleep(x);
}

void textAct1(string playerName, int playerGender){
//	int x=2500;
	int x=0;
	Sleep(x);
	cout<<"Ehh...";
	Sleep(x/2);
	cout<<"...";
	Sleep(x/2);
	cout<<"..."<<endl;
	Sleep(x/2);
	cout<<"Ceregine - the capital of Landburn is a very lively place."<<endl;
	Sleep(x/2);
	cout<<"There is always job for treasure hunters and monster slayers there."<<endl;
	Sleep(x+x/2);
	cout<<"Always..."<<endl;
	Sleep(x);
	cout<<"Except for today... When you wanted to start your career."<<endl;
	Sleep(x);
	cout<<"You have spent last 11 hours looking for someone who could hire you."<<endl;
	Sleep(x);
	cout<<"Tired, hungry and inexperienced. Those 3 words describe you perfectly now."<<endl;
	Sleep(x+x);
	cout<<"- HEEEEYYY!!!!!!"<<endl;
	Sleep(x/2);
	cout<<"A young ";
		if(playerGender==1){
			cout<<"woman runs into you.";
			Sleep(x/2);
			cout<<endl<<"She ";
		}
		else{
			cout<<"man runs into you.";
			Sleep(x/2);
			cout<<endl<<"He ";
		}
	cout<<"is screaming"<<endl<<"- "<<playerName<< " you have to help me!"<<endl;
	Sleep(x);
	cout<<"  Please!"<<endl;
	Sleep(x);
	cout<<"- Wait, how do you know my name?"<<endl;
	Sleep(x);
	cout<<"- PLEASE!"<<endl;
	Sleep(x+500);
	cout<<"And then you notice a big thug running towards you."<<endl;
	Sleep(x);
	cout<<"He's angry. His eyes are glowing with pure hate."<<endl;
	Sleep(x);
	cout<<"- YARRR!"<<endl;
	Sleep(x);
	cout<<"He's getting closer. You decide to fight for your new..friend?"<<endl;
}
void textAct11(int playerGender, string playerName){
	//	int x=4000;
		int x=0;
		cout<<"- Woah, thanks!"<<endl<<"The person who got saved hugs you. ";
		Sleep(x);
			if(playerGender==1){
				cout<<"She ";
			}
			else{
				cout<<"He ";
			}
		cout<<"looks around and takes your hand."<<endl;
		Sleep(x/2);
		cout<<"- Come with me!"<<endl;
		Sleep(x);
		cout<<"You get dragged to an abandoned building."<<endl<<"It's almost crumbling and you don't feel safe here..."<<endl;
		Sleep(x*2);
		cout<<"What's going on in the first place?"<<endl;
		Sleep(x);
		cout<<"- Who are you? How do you know my name and where is my payment?"<<endl;
		Sleep(x);
		cout<<"You asked. And you got totally ignored."<<endl;
		Sleep(x);
		cout<<"- I must heal your wounds. You got hurt because of me."<<endl;
		Sleep(x);
		cout<<"You hear the sadness in ";
			if(playerGender==1){
			cout<<"her voice. But she seems excited."<<endl;
			Sleep(x);
			cout<<"She ";
		
			}
			else{
				cout<<"his voice. But he seems excided."<<endl;
				Sleep(x);
				cout<<"He ";
			}
		cout<<"murmurs something. You start feeling warmth flowing through your body."<<endl;
		cout<<"- I'm so glad I found you "<<playerName<<"!"<<endl;
		Sleep(x/2);
		cout<<"- I need you to help me. I was watching you for a long time now."<<endl;
		Sleep(x/2);
		cout<<"- Your skills are amazing!"<<endl<<endl;
		//some info about story and intro to a spider attack
		 
		
}
