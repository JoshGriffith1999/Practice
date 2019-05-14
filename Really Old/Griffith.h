/*
Holds the functions that are needed for the battle arena

*/

#ifndef Griffith_h
#define Griffith_h

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//structurs that all character and enemies will be using
typedef struct{
	
	char name[100];
	float health;
	float attack;
	float defense;
	float magicAttack;
	int actionPoints;
	
	/*
		float attackModifier = 1;
		float magicModifier = 1;
		float magicDefense = 1;
	*/
	
}champion_t;

// this is where the user will make their character; the input parameters will be a champion struct that the user will "make"
champion_t makeChampion(champion_t champion){
	
	printf("What is your name?\t");
	gets(champion.name);
	
	champion.health = 2000;
	
	champion.attack = 11;
	
	champion.defense = 5;
	
	champion.magicAttack = 7;
	
	champion.actionPoints = 15;
	return champion;
	
}

/*
	main battle function all battle related item will happen here; the enemey will always make their move first first
	Start of phase the enemy and user will recieve two action points to their action point pool
	Case one will always be an normal attack - 3 action points
	Case two will always be a magic attack
	Case three will always be heal - magic damage always ignores armour
	Case four will be fortifiyng meaning the who ever will gain one extra action point
*/
void battle(champion_t user, champion_t enemy){
	
	srand(time(NULL));
	int userTest;
	
	while(enemy.health > 0 || user.health > 0){
		
		int aiTest = 1 + rand() % 4;
		enemy.actionPoints += 2;
		user.actionPoints += 2;
		
		//Start of the enemy battle step
	if(enemy.actionPoints >= 10){	
	
		switch(aiTest){
		
			case 1: user.health = user.health - (enemy.attack - user.defense);
					enemy.actionPoints -= 5;
					printf("%s now has %.2f health left\n",user.name, user.health);
			break;
		
			case 2: user.health = user.health - enemy.magicAttack;
					enemy.actionPoints -= 5;
					printf("%s now has %.2f health left\n",user.name, user.health);
			break;
		
			case 3: enemy.health += 50;
					printf("%s now has %.2f health left\n",enemy.name, enemy.health);
			break;
		
			case 4: enemy.actionPoints += 1;
					printf("The enemy fortified\n");
			break;		
		
}
}
	else{ puts("The enemy doesn't have enough action points to do anything this turn\n"); }
	
	//Start of the user battle step
	
	if(user.actionPoints >= 10){
	
		puts("1: Normal Attack 2: Magic Attack 3: Heal 4: fortify");
		printf("Enter an option from the list above\t");
		scanf("%i", &userTest);
	
		switch(userTest){
		
			case 1: enemy.health = enemy.health - (user.attack - enemy.defense);
					user.actionPoints -= 3;
					printf("%s now has %.2f health left\n",enemy.name, enemy.health);
			break;
	
			case 2: enemy.health = enemy.health - user.magicAttack;
					user.actionPoints -= 5;
					printf("%s now has %.2f health left\n",enemy.name, enemy.health);
			break;
		
			case 3: user.health += 50;
					printf("%s now has %.2f health left\n",user.name, user.health);
			break;
			
			case 4: puts("You fortified meaning you do nothing but gain an extra three action points\n");
					user.actionPoints += 1;
					printf("You now have %i action points\n", user.actionPoints);
		
	}//end swithc
	}//ends if
	
	else{ puts("you don't have enough action points to do anything this turn\n"); }// ends else
		
}//end while loop
}// end function

//Heals either the user or the enemy; depending on who used it


#endif