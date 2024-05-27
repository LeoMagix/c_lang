#include <stdio.h>

/**
 * program to print EOF value
 */

#define	EOF 	'~'	//Assigned '~' as end of file

int main()
{
	int c;

	c = getchar() != EOF;

	printf("%d\n", EOF);			//Doubt that EOF == -1
	printf("%d\n", c);	//Prints 1 for every value, issues with value of EOF
}
