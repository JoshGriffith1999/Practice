#include <stdio.h> 

int main() 
{ 
	//delcare variables 
	int height;

	//ask for height 
	printf("How tall are you in inches? "); 
	scanf("%d", &height); 

	//determine is the person can ride or not 
	//if the height is at least 48 then yes 
	//otherwise no 
	if (height >=48) 
{
	printf("Congradulations you can ride\n");
} 
	else
{
	printf("Sorry you didn't meet the minimum heiht requirement\n"); 
}
	//print thank message
	printf("THANK YOU for visiting EGG LAND\n"); 

	return 0; 
} 