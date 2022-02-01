/*
Josh Griffith
6/29/17
this will take the scores of 3 test and sort them in acending order
*/

#include<stdio.h>
#include<stdlib.h>

//function prototypes/sizes
float sort(float ts);
#define SIZE 4


int main(void){
	
float score[SIZE];
unsigned int counter = 1;	
	
	//getting the scores
	for(counter = 1; counter < SIZE; counter++){
	printf("Enter a valid test score for test %u\t", counter);
	scanf("%f", &score);
	
	}
	
	//sorting and returning the scores
	for(counter = 1; counter <=SIZE; counter++){
		
		score[SIZE] = sort(counter);
	}
	
	//display in acending order
	for(counter = 1; counter < 4; counter++){
		
		printf("%f\n", score[counter]);
	}
	return 0;
}

float sort(float ts){
	size_t j;
	int pass;              
	int hold;
	
	
	                                
		return ;
}                          