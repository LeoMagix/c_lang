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
		if (c == ' ')
		{
			++blnk;
		}
		if (c == '\t')
		{
			++tab;
		}
		if (c == '\n')
		{
			nline = 1;
			++nline;
		}
	}
	printf("Blanks:%d Tabs:%d Newline:%d\n", blnk, tab, nline);
}
