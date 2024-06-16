#include <stdio.h>

/**
 * simple program to count the words and characters entered at the prompt
 */

#define EOF	'.'	//Redefined end-of-file.
#define	OUT 	0	//outside a word
#define IN	1	//inside a word 

int main()
{
	int state = OUT;
	int c, nl, wc, nc, blnk;

	nl = wc = nc = blnk = 0;

	while ((c = getchar()) != EOF)  
	{
		++nc;
		if (c == '\n')
		{
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
			++blnk;
		}
	/*The vital part of the program-informs the computer that we are already in a whitespace
	 *  The Trick- it's the not whole word it counts, it hits the first instance of a letter,
	 *  waits for a whitespace to indicate the occurence of another letter*/
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
	}
	printf("Newlines:%d Word(s):%d Characters:%d\n Blank Space:%d\n", nl, wc, nc, blnk);
}
