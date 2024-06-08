#include <stdio.h>

/**
 * This programs presents a histogram of the length of
 * 	words entered at the command line.
 */

#define EOF	'.'	//Redefined end-of-file
#define	WORD_LEN	10
int main()
{
	int i, c, nletter;
	int nwords[WORD_LEN];

	for (i = 0; i < WORD_LEN; ++i)
	{
		nwords[i] = 0;
		printf("%d %d\n", i, nwords[i]);
	}

	while ((c = getchar()) != EOF)		
	{
		//check if character is an alphabet
		if (c != ' ' && c != '\t' && c != '\n')
		{
			for (nletter = 0; nletter < WORD_LEN; ++nletter)\
			{
				++nletter;
			}
			printf("%d\n", nletter);
			++nwords[nletter];
		}
	
		//check if character is a whitespace
		else if (c == ' ' || c == '\t' || c == '\n')
		{
			nletter = 0;
		}
		
		else
		{
			;
		}
		//continue to count character if != whitespace
	}

}
