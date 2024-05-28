#include <stdio.h>
/**
 * Program to copy input to output
 */

#define EOF	'.'	//Redefined end of file to be '.'

int main()
{
	char c; 

	while ((c = getchar()) != EOF)		//Can't seem to identify EOF- *update:fixed it by the way
	{
		putchar(c);			//I need to confirm EOF value- *update:redefined EOF
		//printf("%d\n", c);
	}
	printf("\n");
}
