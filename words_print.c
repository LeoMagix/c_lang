#include <stdio.h>

/**
 * Program to print words entered at the prompt
 *  each on a newline
 */

#define EOF	'.'	//Redefined end-of-file

int main()
{
	int c, wc, nc, blnk;

	wc = nc = blnk = 0;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		if (c == ' ' || c == '\t')
		{
			++blnk;
			printf("\n");
		}
		++nc;

	}
	printf("\n");
	printf("char:%d blank:%d\n", nc, blnk);
	//printf("Words:%d\n", wc);
}
