#include <stdio.h>

/**
 * Program that prints whitespace characters such as tabs,
 *	backspace, newlines to the terminal
 */

#define EOF	'.'	//Redefined end of file

int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
	/*
	 * Can't find a way to assign c a '\' xter with a letter in a single quote
	 *  Problem:Lack complete knowledge on how to manipulate the character data type in C*/ 
	
		if (c == '\n')
		{
<<<<<<< HEAD
			c = '\b';
			printf("\\n");
		}
		if (c == '\\')
		{
			c = '\b';
			printf("\\");
		}
		if (c == '\t')
		{
			c = '\b';
			printf("\\t");
		}
		if (c == ' ')
		{
			c = '\b';
			printf("\\blnk");
=======
			c = '\\n';
		}
		if (c == '\\')
		{
			c = '\\';
		}
		if (c == '\t')
		{
			c = '  ';
			//printf("\\t");
		}
		if (c == ' ')
		{
			c = '';
			//printf("b");
>>>>>>> main
		}
		putchar(c);
	}
	printf("\n");
}

