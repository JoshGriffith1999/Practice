//Header files
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

//Array size
# define SIZE 7

//Function prototypes
float getname(char name);


int main(void){

char name[SIZE];
unsigned int counter = 0;
int stopper = 0;

printf("How long is your name?\t");
scanf("%d", &stopper);
	
	

	for(counter = 0;counter <= stopper; counter++){
		
		name[counter] = getname(counter +1);
		}
	



return 0; 
}


float getname(char letter){
	
	puts("Enter a letter\t");
	scanf("%s", &letter);
	
	return letter;
}