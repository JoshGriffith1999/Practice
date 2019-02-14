#include <stdio.h>
#include <string.h> //string functions
#include<stdlib.h>
#include<time.h>

int max = 70;
int min = 30;
//rand()%(max+1-min) +min;
//rand() / RAND+MAX
//(rand() % (max+1-min)+min)+rand()/RAND_MAX)

//super variable that can hold more variable if wanted view like a class
typedef struct{
//null '\o' 
	char name[20];
	int hp; // health point
	int ap; // attack power
	int luck;
	int stam; // stamina
	int mag; // magic
	
}character;

void createrChar(character* avatar){
	printf("Please enter your character name\t");
	scanf("%s", avatar->name);

	printf("Please enter your character Health points\t");
	scanf("%i", &(avatar->hp));

	printf("Please enter your character attack points\t");
	scanf("%i", &(avatar->ap));

	printf("Please enter your character luck\t");
	scanf("%i", &(avatar->luck));

	puts("\n");


}

void attack(character* attacker, character*defender){

if(attacker->luck > rand()%(max+1-min) + min){

//Simulate Charlie attacking Drax
//SImulate if attacking Charlie

defender->hp = defender->hp - attacker->ap;

printf("%s currently has %i hp left, becuase %s attacked for %i damage\n", defender->name, defender->hp, attacker->name, attacker->ap);

}

else{

printf("%s missed ", attacker->name);

}
}

void battle(character* soldier1, character* soldier2){

do{

attack(soldier1, soldier2);

attack(soldier2, soldier1);

}while(soldier1->hp > 0 && soldier2-> hp > 0);

if(soldier1->hp > 0){printf("%s won\n\n", soldier1->name);}
else if(soldier2->hp > 0){printf("%s won\n\n", soldier2->name);}
else{printf("Both players survived\n\n");}

}




void main(){

srand(time(NULL));

//class object
character player;
character drax;

createrChar(&player);
createrChar(&drax);

//printf("Your character's name is %s, they have %i hp, and %i ap\n",player.name, player.hp, player.ap );

battle(&player, &drax);

}