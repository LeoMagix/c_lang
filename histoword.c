#include <stdio.h>

/**
 * This programs represents the length of words entered at the command line
 *  in a horizontal histogram format.
 *   *Limit: one(1) - twelve(12) letters.
 */

#define	NUM	12

int main()
{
	int i, j, k, c, x, ws, nc, nletters;
	int lwords[NUM];

	i = j = k = ws = nc = nletters = 0;

	/*Initialize the array*/
	for (i = 0; i < NUM; ++i)
	{
		lwords[i] = 0;
		//printf("%d %d\n", i, lwords[i]);
	}

	while ((c = getchar()) != EOF)		
	{
		/*Part of the program that handles whitespace*/
		if (c == ' ' || c == '\t' || c == '\n')
		{
			++ws;
			/*printf("Nos:%d, ", no);*/	//This line checks if I got the last value for nletters
			++lwords[nletters];
			nletters = 0;
		}
		/*Handle aspects of the character that is not a whitespace character*/
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			++nletters;
		}
		++nc;
		//printf("No:%d, Whyte:%d\n", no, ws);
	}
	printf("No:%d, Whyte:%d Characters:%d\n", nletters, ws, nc);

	/*Display the information about the lengt of words computed*/
	for (x = 0; x < NUM; ++x)
	{
		printf("Number of words with %d letters = %d\n", x, lwords[x]);
	}

	/* This part of our code handles the printing of the Histogram*/
	while (j < NUM)
	{
		for (k = 1; k <= lwords[j]; ++k)
		{
			if (k == 0)
			{
				printf("|");
			}
			else
			{
				printf("=");
			}
		}
		printf("\n");
		++j;
	}
}
