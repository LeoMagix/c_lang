#include <stdio.h>

/**
 * A foray into array
 */

//#define EOF	'.'	//Redefined end of file

int main()
{
	int c, i, nwhite, nother;
	int ndigit[10];		//analogous to variable declaration- int ndigit0, ndigit1,..., ndigit9;

	nwhite = nother = 0;

	for (i = 0; i < 10; ++i)
	{
		ndigit[i] = 0;		//initializes the variable ndigit[n] stored contigiously in memory
		//printf("%d\n", ndigit[i]);
	}

	while ((c = getchar()) != EOF)
	{
		if ( c >= '0' && c <= '9')
		{
		/*Way to specify range
		 * What I don't fully grasp is how do these character constants really work
		 * *update|23|08|24:Ask ASCII, numeric values represent different characters
		 *  stored contigiously in the machine. Therefore, arithmetic operations such as these
		 *  with character constants are possible as long as it is chronological*/
			++ndigit[c - '0'];	//index arithmetic 
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
	/* This part of the program handles the printing of the results */
	printf("digits=");
	for (i = 0; i < 10; ++i)
	{
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);

}
