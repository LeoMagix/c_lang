#include <stdio.h>

/**
 * Program that prints whitespace characters such as tabs,
 *	backspace, newlines to the terminal
 */

//#define EOF	'.'	//Redefined end of file

int main()
{
	double c;

	while((c = getchar()) != EOF)
	{
	/*
	 * Can't find a way to assign c a '\' xter with a letter in a single quote
	 *  Problem:Lack complete knowledge on how to manipulate the character data type in C
	 *  *update: Found it!*/ 
	
		if (c == '\t')
		{
			c = '\0';
			printf("\\t");
		}
		if (c == '\n')
		{
			c = '\0';
			printf("\\n");
		}
		if (c == '\\')
		{
			c = '\0';
			printf("\\");
		}
		if (c == '\b')
		{
			c == '\0';
			printf("\b");
		}
		else
		{
			putchar(c);
		}
		//c = getchar(); weired results with this include in the program
	}
	printf("\n");
}

