#ifndef BattleHeader
#define BattleHeader

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>

typedef struct{
char name[35];
int hp;
int ap;
int dp;
int magpow;
int stlth;

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

void afterBattleMessage(character* a, character* b){
	
	
	if(a->hp <= 0){
	
	cout << "You lose better luck next time" << endl;	
}
else{
	cout << "congratulations you made it to the next round, your next oppointent is" << b->name << "\n" << "Ready?.....Set?.....FIGHT!" << endl;
	cout << endl;
	sleep(5);

}
	
	
}



#endif