#include <stdio.h>

/**
 * A program to replace strings of one or more blanks
 *  by a single blank.
 */

#define EOF	'.'	//Redefined end of file
/*Can't write the program for now, don't understand the instruction.*/
int main()
{
<<<<<<< HEAD
	int blnk, i, c;

	blnk = 0;

	while ((c = getchar()) != EOF)
	{
		if (c =  ' ')
		{
			++blnk;

		}
		
		if (blnk > 12)
		{
			for (i = blnk; i <= 1; i--)
			{
				c = '\b';
			}
=======
	int i, c;

	while ((c = getchar()) != EOF)
	{
	/*
	 * It works but still is incomplete, It can't handle tabs < blanks > tabs
	 *  Problem: how do you represent more than one blanks in C?*/
		if (c == ' ' || c == '\t')
		{
			c = ' ';
>>>>>>> main
		}
		putchar(c);
	}
	printf("\n");
}
