#include <stdio.h>

/**
 * count the number of tabs, blanks, newlines
 */

int main()
{
	int c;
	int tab, blnk, nline;

	tab = blnk = 0;

	while ((c = getchar()) != EOF)
	{
		/* First forays into conditional statements */
		if (c == ' ')	//Check if the current character is a blank
		{
			++blnk;
		}
		if (c == '\t')	//Checks if the current character is a tab
		{
			++tab;
		}
		if (c == '\n')	//Checks if the current character is a newline
		{
			nline = 1;
			++nline;
		}
	}
	printf("Blanks:%d Tabs:%d Newline:%d\n", blnk, tab, nline);
}
