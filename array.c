#include <stdio.h>

/**
 * A foray into array
 */

#define EOF	'.'	//Redefined end of file

int main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;

	for (i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;
		//printf("%d\n", ndigit[i]);
	}

	while ((c = getchar()) != EOF)
	{
		if ( c >= '0' && c <= '9')
		{
			++ndigit[c - '0'];
			//printf("here\n");
		}
		else if (c == ' ' || c == '\n' || c == '\t')
		{
			++nwhite;
		}
		else
		{
			++nother;
		}
	}

	printf("digits=");
	for (i = 0; i < 10; ++i)
	{
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);

}
