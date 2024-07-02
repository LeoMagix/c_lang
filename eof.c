#include <stdio.h>

/**
 * program to print EOF value
 */

//#define	EOF 	'~'	//Assigned '~' as end of file

int main()
{
	int c;

	c = getchar() != EOF;

	if (getchar() != EOF)
	{
		printf("%d\n", c);
	}
	else
	{
		printf("EOF value:%d\n", EOF);	//Doubt that EOF == -1. Update*;Enter CTRL + d for end of file character
		printf("%d\n", c);	//Prints 1 for every value, issues with value of EOF. Update:* It was because 
	}	// I did not enter EOF character.
}
