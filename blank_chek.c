#include <stdio.h>

/**
 * A program to replace strings of one or more blanks
 *  by a single blank.
 */

#define EOF	'.'	//Redefined end of file
/*Can't write the program for now, don't understand the instruction.*/
int main()
{
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
		}
		putchar(c);
	}
	//putchar(c);
}
