/* 
Josh G. 
program 3: 7/13/16 
Random number counter 
*/  

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

	int main()
{

	int x, N, roll, five_count; 

	srand(time(NULL));
	five_count = 0;
	
	printf("How many numbers do you want: "); 
	scanf("%d", &N); 

	x = 1;
	while (x <= N) 
{ 
	roll = rand() % 6 + 1; 
	printf("You got a: \n"); 
	printf("%d\n", x);  

	if (roll == 5) 
	{ 
		five_count = five_count + 1;
	}
	x = x + 1; 
}




	return 0; 
}