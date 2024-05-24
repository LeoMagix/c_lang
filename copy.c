#include <stdio.h>
/**
 * Program to copy input to output
 */

#define EOF	'.'	//Redefined end of file to be '.'

int main()
{
	int c; 

	while ((c = getchar()) != EOF)		//Can't seem to identify EOF
	{
		putchar(c);			//I need to confirm EOF value
		//printf("%d\n", c);		
		
	}
	printf("\n");
}
