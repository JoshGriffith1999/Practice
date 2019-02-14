#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <unistd.h> 

int main() 
{ 
	int i, indent, sp;

	srand(time(NULL)); 
 
	for (i = 0; i < 20; i++) 
	{ 
		indent = rand() % 40; 
		for (sp = 0; sp < indent; ++sp) 
			printf(" ");

		sp = rand() % 3; 
		if (sp == 1 ) 
			printf("Gencyber\n"); 
		else if (sp == 2) 
			printf("I <3 Programming\n"); 
		else 
			printf("@@\n");
		usleep(250000);

	}

	return 0; 
}