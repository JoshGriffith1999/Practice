//Josh Griffith
//7/11/16
//Dice rolling adder 
//Gencyber program 1 
//Taking 3 dice values after different roles and adding them together

#include <stdio.h> 

int main () 
{ 

	int sum, roll; 
	//Roll first and to sum
	printf("hi\n"); 
	printf("Tom\n"); 
	printf("Gencyber 2016!\n");
	//Roll second and to sum
	printf("Enter dice value: "); 
	scanf("%d", &roll); 
	printf("Rolled %d on dice\n", roll); 	
	sum= sum + roll; 
	//Roll third and to sum
	printf("Enter dice value: "); 
	scanf("%d", &roll); 
	printf("Rolled %d on dice\n", roll); 	
	sum= sum + roll;  
	//The sum addition
	printf("Enter dice value: "); 
	scanf("%d", &roll); 
	printf("Rolled %d on dice\n", roll); 	
	sum= sum + roll;  
	//Printing the final sum
	prinf("Total is %d\n", sum); 
	
return 0; 
} 