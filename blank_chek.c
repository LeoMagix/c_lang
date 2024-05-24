#include <stdio.h>

/**
 * A program to replace strings of one or more blanks
 *  by a single blank.
 */

#define EOF	'.'	//Redefined end of file
/*Can't write the program for now, don't understand the instruction.*/
int main()
{
	int blnk, c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t')
		{
			printf("");
		}
		putchar(c);
	}
	//putchar(c);
}
