#include <stdio.h>

/**
 * A program to replace strings of one or more blanks
 *  by a single blank.
 */

#define EOF	'.'	//Redefined end of file
/*Can't write the program for now, don't understand the instruction.*/
int main()
{
	int i, c;

	while ((c = getchar()) != EOF)
	{
	/*
	 * It works but still is incomplete, It can't handle tabs < blanks > tabs
	 *  Problem: how do you represent more than one blanks in C?*/
		if (c == ' ' || c == '\t')
		{
			c = ' ';
		}
		putchar(c);
	}
	printf("\n");
}
