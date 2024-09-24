#include <stdio.h>

/**
 * Program that makes whitespace characters such as tabs, backspace, blanks, newlines, 
 * backslash visible in the terminal
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
			c = '\0';	//Use of the NUL character to prevent c from storing a garbage value
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
		if (c == ' ')
		{
			c = '\0';
			printf("\\b");
		}
		else
		{
			putchar(c);
		}
		//c = getchar(); weired results with this included in the program
	}
	printf("\n");
}

