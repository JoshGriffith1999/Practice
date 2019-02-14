//Josh Griffith
//7/11/16
//Dice rolling adder 
//Gencyber program 1 
//Taking 3 dice values after different roles and adding them together

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main () 
{ 

	int sum, roll; 
	int many = 1;
	srand(time(NULL)); 
	sum = 0;

	while (many <= 10 )
{
	roll = rand() %6 + 1;
	printf("Rolled %d on dice\n", roll); 	
	sum= sum + roll;  
	many = many + 1; 
}


	//Printing the final sum
	printf("Total is %d\n", sum); 
	
return 0; 
} 