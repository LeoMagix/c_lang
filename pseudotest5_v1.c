#include <stdio.h>

/**
 * Caesar's Cipher:
 *  This version of our cipher has the letters already stored,
 *  our program just performs simple encoding of the cipher or just
 *  creates an algorithm for encoding the alphabets.
 */

#define	LATA	26

char czer(int SIZE, char encode[]);

int main()
{
	char alpha[LATA];
	int i;

	for (i = 0; i < LATA; ++i)
	{
		alpha[i] = 65 + i;
		/*if (i % 3 == 0)
		{
			//printf("|");
		}*/
		printf("%c:%d, ", alpha[i], i);
	}
	printf("\n");
	
	/* Encoding our cipher */
	printf("\nCaesar's Cipher: +3\n");
	czer(LATA, alpha);	/*Problem encountered; no output is returned, keeps terminal in stand-by mode
				  **Update: Fixed it. Source of bug, semi-colon present at beginning of while loop 
				  	*Error >> while (a < size); */
	return 0;
}

/* Function to manage the bulk of cipher */
char czer(int SIZE, char cifa[])
{
	int a, b;

	a = 0;

	while (a < SIZE)
	{
		if (a >= 23 && a <= 26)
		{
			b = ++cifa[0];
		}
		else
		{
			b = cifa[a] + 3;
		}
		//printf("%c:%d, ", b, a);
		++a;
	}
	printf("\n");
}
