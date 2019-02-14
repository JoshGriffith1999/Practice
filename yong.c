#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 

	int i, x, pick; 
	char ans, letter;

	do 
{ 

	for (i =0; i < 8; ++i) 
	{ 
		pick = rand() % 3; 
			if ( pick ==0 ) 
				{ 
					x = rand() % 26; 
					letter ='a' + x;
				}
			else if (pick == 1)
				{ 
					x = rand() % 26;
					letter = 'A' + x;
				}
			else 
				{ 
					x = rand() % 10; 
					letter = '0' + x;
				}
		x = rand() % 26; 
		letter = 'a' + x;
		printf("%c ", letter);
	}

	printf("\n"); 
	printf("Go again> (y or n): "); 
	scanf(" %c", &ans);
} while (ans != 'n');
	return 0; 
}