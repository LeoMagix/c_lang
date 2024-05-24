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
	int c, nl, wc, nc;

	nl = wc = nc = 0;

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
		}
		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
	}
	printf("Newlines:%d Word(s):%d Characters:%d\n", nl, wc, nc);
}
