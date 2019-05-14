/*
Josh Griffith
7/19/2017
Battle program between a character created by the user, and already created characters made by the programmer
	player vs Alduin
	player vs Diablo
	player vs Kieth

*Update 5
	show to people
	
Test buidl character
	Name: James of <something fancy>
	HP: 2500
	AP: 12
	DP: 11
	MagPow: 4
	Stealth: 6
	Luck: 75


*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>

using namespace std;

typedef struct{
char name[100];
int hp;
int ap;
int dp;
int magpow;
int stlth;
int luck; // always between 1 and 95

}character;

void makechar(character* avatar){
	
	cout << "enter your character's name\t";
	cin >> avatar->name;
	
	cout << "enter your character's health point\t";
	cin >> avatar->hp;
	
	cout << "enter your charcter's attack power\t";
	cin >> avatar->ap;
	
	cout << "enter your character's defense points\t";
	cin >> avatar->dp;
	
	cout << "enter your character's magical power\t";
	cin >> avatar->magpow;
	
	cout << "enter your character's stealth\t";
	cin >> avatar->stlth;

	cout << "enter your character's luck\t";
	cin >> avatar->luck;
	
	do{
	if(avatar->luck >= 75){
		
		cout << "Your luck is to high enter a new one" << endl;
		cout << "enter your character's luck\t";
		cin >> avatar->luck;
	
	}
	else{
		
		break;
		
	}
	}while(avatar->luck > 1 && avatar->luck < 95);
	}

//	Global variables
int stlthcrt = 1.25;
int crit = 1.5;
int pothel = 5;
int diatt;
int alatt;
int katt;
int playeratt;
int potmax = 9;
int potmax2 = 9;
//int potleft;

//Sleep function
void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

//Critical hit function
int crithit(int z){

int x = rand() % 6 + 1;

switch(x){
case 1: z = z + 5;
	cout << "Small bonus bringing attack up to " << z << endl;
break;
case 2: cout << "No bonus" << endl;
break;
case 3: z = z / crit;
	cout << "Damage has been cut in half making it " << z << " now" << endl;
break;
case 4: z = z * crit;
	cout << "Critical hit making attack deal " << z << " damage" << endl;
break;
case 5: z = 0;
	cout << "Miss making attack deal " << z << " damage" << endl;
break;
case 6: z = z -5;
	cout << "Damage reduction causing it to go down to " << z << endl;
break;

default:
break;}

return z;
}

//Tells user if one of the characters has been knocked out
void message(character* x, character* y){
if(x->hp > 0 && y->hp > 0){

cout << x->name << " wasn't knocked out" << endl;


}

else if(x->hp > 0 && y->hp > 0){

cout << y->name << " wasn't knocked out" << endl;


}

else if(y->hp <= 0){
	
	cout << y->name << " Has been knocked out" << endl;

	
}

else if (x->hp <= 0){

	cout << x->name <<" has been knocked out" << endl;
	

}

}

//Health pots for bosses
void pota(character* a){
	
	if(potmax > 0){
		if(a->hp <= 250){	
			a->hp = a->hp + pothel;
			cout << a->name <<" healed up to " << a->hp << endl;
			potmax = potmax - 1;
			cout << endl;}

		else if(a->hp >= 250){
			a->hp = a->hp + 0;
			cout << a->name <<" didn't heal" << endl;
			cout << endl;}}
	
	else if(potmax <= 0){
		
	cout << a->name << " didn't have any pots to heal with" << endl;
	cout << endl;}
	
}/*End of Function*/

//Health pots for player 
void pota2(character* a){
	
	if(potmax2 > 0){
		if(a->hp <= 250){	
			a->hp = a->hp + pothel;
			cout << a->name <<" healed up to " << a->hp << endl;
			potmax2 = potmax2- 1;
			cout << endl;}

		else if(a->hp >= 250){
			a->hp = a->hp + 0;
			cout << a->name <<" didn't heal" << endl;
			cout << endl;}}
	
	else if(potmax2 <= 0){
		
	cout << a->name << " didn't have any pots to heal with" << endl;
	cout << endl;}
	
}/*End of Function*/

void resetPot(){
	
	potmax = 9;
	potmax2 = 9;
	
}

void afterBattleMessage(character* a, character* b, character* c){
	
	
	if(a->hp <= 0){
	
	cout << "You lose better luck next time" << endl;	
}
else{
	cout << "congratulations you made it to the next round by knocking out " << b->name  << " your next oppointent is " << c->name << "\n" << "Ready?.....Set?.....FIGHT!" << endl;
	cout << endl;
	sleep(5);

}
	
	
}

void rtm(){
	
	int x = rand() % 8 + 1;
	
	switch(x){
		
		case 1:{cout << "what if i told you these guys were hired to lose today?" << endl;}
		break;
		case 2:{cout << "Everything your doing right now, isn't real" << endl;}
		break;
		case 3:{cout << "You can't do 3 things in virtual reality, die, get grounded, or call customer service" << endl;}
		break;
		case 4:{cout << "Do you have the time to watch this shit cause i sure as hell don't" << endl;}
		break;
		case 5:{cout << "My Grandma hits harder then you" << endl;}
		break;
		case 6:{cout << "If this was CSGO i would totaly destroy you" << endl;}
		break;
		case 7:{cout << "There was this blind man right? a blinds man and and he walked into a fish market and said *breath in* good morning ladies" << endl;}
		break;
		case 8:{cout << "Get off of you lazy ass and do something" << endl;}
		break;
		default:{cout << "I like trains" << endl;}
	
	}
	
	
	
}

//character objectes of bosses
//		order of states is name, attack power, defense power, magic power, stealth, luck
character diablo = {"Diablo", 1000, 12, 8, 3, 3,68};
character alduin = {"Alduin", 1050, 11, 17, 3, 0,72};
character kieth = {"kieth", 1100, 10, 5, 8, 5,55};
character seth = {"Seth", 1150, 9, 12, 8, 0,22};




int main(void){
	
	
	for(int counter = 1; counter <=3; counter++){
	cout << "Wake up" << endl;
	sleep(500);
	}
	
	cout << "Who are you?" << endl;
	cout << "Welcome to the arena a gladiator death match game where you build a character and fight horrible bosses of the arena to the death" << endl;
	sleep(650);
	cout << "Now lets build your character. Remeber....Requiescat in Pace" << endl;
	sleep(450);
	
	//Player's character
	character player;	
	makechar(&player);
	cout << endl;
	sleep(500);
	
cout << player.name << " Its your turn to fight in the arena.....see you in hell" << endl;
sleep(1500);
cout << "*the roar of the crowd as hundreds come to watch criminal fight city guards," << "\n" << " many of these people placed bets that you'll die...though you should know*" << endl;
sleep(1500);
cout << "Welcome slave to the arena!!! you have been selcted to fight many of the horrible bosses that live here good luck.....your gonna to lose no matter what" << endl;
sleep(1500);
cout << "Round one " << player.name << " versus " << alduin.name << "\n" << "Read?.....Set?.....FIGHT!" << endl;
cout << endl;
sleep(1500);
	
//Battle 1 Player vs Alduin
do{

//Creating the final attack damage being dealt to the boss
playeratt = player.ap + player.magpow + (player.stlth * stlthcrt);
alatt = alduin.ap + alduin.magpow + (alduin.stlth * stlthcrt);


//Calculates remaining hp to be displayed
player.hp = (player.hp + player.dp) - alatt;
alduin.hp = (alduin.hp + alduin.dp) - playeratt;

//Checks for any attack buffs, attack message, see if some is knocked out-ends battle if someone is, potion if no one was
playeratt = crithit(playeratt);
cout << player.name << " attacked " << alduin.name << " for " << playeratt << " leaving " << alduin.hp << " on " << alduin.name << endl;
message(&alduin, &player);
if(alduin.hp <=0){
	
	cout << endl;
	break;
	
}
pota(&alduin);
sleep(100);



//Checks for any attack buffs, attack message, see if some is knocked out-ends battle if someone is, potion if no one was
alatt = crithit(alatt);
cout << alduin.name << " attacked " << player.name << " for " << alatt << " leaving " << player.hp << " on " << player.name << endl;
message(&player, &alduin);
if(player.hp <=0){
	
	cout << endl;
	break;
	
}
pota2(&player);
sleep(100);


cout << endl;
}while(player.hp >= 0 && alduin.hp >= 0);










//After battle messages
	afterBattleMessage(&player, &alduin, &diablo);
	rtm();
	sleep(7000);
	void resetPot();

//Second battle player vs Diablo
do{
	
	diatt = diablo.ap + diablo.magpow + (diablo.stlth * stlthcrt);
	playeratt = player.ap + player.magpow + (player.stlth * stlthcrt);
	
	player.hp = (player.hp + player.dp) - diatt;
	diablo.hp = (diablo.hp + diablo.dp) - playeratt;

//Checks for any attack buffs, attack message, see if some is knocked out-ends battle if someone is, potion if no one was	
playeratt = crithit(playeratt);
cout << player.name << " attacked " << diablo.name << " for " << playeratt << " leaving " << diablo.hp << " on " << diablo.name << endl;
message(&diablo, &player);
if(diablo.hp <=0){
	
	cout << endl;
	break;
	
}
pota(&diablo);
sleep(100);



//Checks for any attack buffs, attack message, see if some is knocked out-ends battle if someone is, potion if one is needed
diatt = crithit(diatt);
cout << diablo.name << " attacked " << player.name << " for " << diatt << " leaving " << player.hp << " on " << player.name << endl;
message(&player, &diablo);
if(player.hp <=0){
	
	cout << endl;
	break;
	
}

pota2(&player);
sleep(100);
	
	
	
	
}while(player.hp >= 0 && diablo.hp >= 0);


afterBattleMessage(&player, &diablo, &kieth);
	rtm();
	sleep(7000);

//Battle 3 Player vs Kieth
do{

//Creating the final attack damage being dealt to the boss
playeratt = player.ap + player.magpow + (player.stlth * stlthcrt);
katt = kieth.ap + kieth.magpow + (kieth.stlth * stlthcrt);


//Calculates remaining hp to be displayed
player.hp = (player.hp + player.dp) - katt;
kieth.hp = (kieth.hp + kieth.dp) - playeratt;

//Checks for any attack buffs, attack message, see if some is knocked out-ends battle if someone is, potion if no one was
playeratt = crithit(playeratt);
cout << player.name << " attacked " << kieth.name << " for " << playeratt << " leaving " << kieth.hp << " on " << kieth.name << endl;
message(&kieth, &player);
if(kieth.hp <=0){
	
	cout << endl;
	break;
	
}
pota(&kieth);
sleep(100);



//Checks for any attack buffs, attack message, see if some is knocked out-ends battle if someone is, potion if no one was
katt = crithit(alatt);
cout << kieth.name << " attacked " << player.name << " for " << katt << " leaving " << player.hp << " on " << player.name << endl;
message(&player, &kieth);
if(player.hp <=0){
	
	cout << endl;
	break;
	
}
pota2(&player);
sleep(100);


cout << endl;
}while(player.hp >= 0 && kieth.hp >= 0);

afterBattleMessage(&player, &kieth, &seth);
	rtm();
	sleep(7000);
}