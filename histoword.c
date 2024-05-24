#include <stdio.h>

/**
 * This programs presents a histogram of the length of
 * 	words entered at the command line.
 */

#define EOF	'.'	//Redefined end-of-file

int main()
{
	int i, c, nletters, nwhite;
	int nwords[11];

	nletters = nwhite = 0;

	for (i = 1; i <= 10; ++i)
	{
		nwords[i] = 0;
		//printf("%d %d\n", i, nwords[i]);
	}

	while ((c = getchar()) != EOF)
	{
		//check if character is an alphabet
		
		//check if character is a whitespace

		//*start a new count* if counter == whitespace

		//continue to count character if != whitespace
	}		
}
