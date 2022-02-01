/*
Josh Griffith
8/8/17
RPG style game where a person creates a character, gives it a class and explores the wild in one of three locations

main beta build*
character development
class system
	person class nerf or buff the characters stats
3 locations to play in
	town
	mountains
	open feild
*/
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>

using namespace std;
//function protoypes
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
			cout << "Your luck is to high enter a new one" << endl;
			cout << "enter your character's luck\t";
			cin >> avatar->luck;
	
	
	
	}while(avatar->luck < 1 || avatar->luck > 95);//While statement
	}//makChar

void pota(character* a){
	
	a->hp += 15;
	cout << a->name << " healed for 15" << endl;
	
}

void potb(character* b){
	
	b->hp += 15;
	cout << b->name << " healed for 15" << end;
	
	
}
void battle(character* player, character* boss){
	int stlthcrt = 1.25;
	int playeratt = player->ap + player->magpow + (player->stlth * stlthcrt);
	int bossatt = boss->ap + boss->magpow + (boss->stlth * stlthcrt);

	player->hp = (player->hp + player->dp) - bossatt;
	boss->hp = (boss->hp + boss->dp) - playeratt;
		
	int choice = 0;
	cout << "What would you like to do 1 for attack or 2 for a potion\t";
	cin >> choice;
	
	do{
	if(choice == 1){
		cout << player->name << " attacked for " << playeratt << " leaving " << boss->hp << " on " << boss->name << endl;
		}
	else if(choice ==2){
		
		pota(&player);
	}
	}while(choice != 1 || choice != 2);
	
	int ranChoice = rand() % 2 + 1;
	
	if(ranChoice == 1){
		
		cout << boss->name << " attacked for " << bossatt << " leaving " << player->hp << " on " << player->name << endl;
		
	}
	else if(ranChoice == 2){
		
		potb(&boss);
		
	}
	
}


int main(){
	
	character player;	
	makechar(&player);
	character alduin = {"Alduin", 1050, 11, 17, 3, 0,72};
	
do{
	
	battle(&player, &alduin);
	
	
	
}while(player.hp >= 0 && alduin.hp >= 0);
	
	if(player.hp <= 0){
		
		cout << "you lose" << endl;
		
	}
	else(alduin.hp <= 0){
		
		cout << "You win" << endl;
	}
	
	return 0;
}