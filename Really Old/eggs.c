/*Josh Griffith 
Programing 2 @gencyber, 7-12-16 
*/ 

#include <stdio.h> 

//("%d") int 
//("%f") float

int main () 
{ 
	//declares variables
	int eggs, cartons, extra; 
	float price, money; 

	//ask how many eggs 
	printf("How many eggs? "); 
	scanf("%d", &eggs); 

	//compute number of full cartoons	
	cartons = eggs/12; 

	//compute number of eggs	
	extra = eggs - (cartons * 12); 

	//print results			
	printf("%d full of cartons\n", cartons); 
	printf("%d eggs left over\n", extra); 	
		
	//the selling point 
	printf("Current price? ");
	scanf("%f", &price); 
	
	money = cartons * price; 

	printf("Value of inventory is %f\n", money);
	
	return 0; 
} 