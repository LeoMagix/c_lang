#include <stdio.h>

/**
 * Program that prints characters such as tabs,
 *	backspace, backlash to the terminal
 */

#define EOF	'.'	//Redefined end of file

int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			printf("\\n");
		}
		if (c == '\\')
		{
			printf("\\");
		}
		if (c == '\t')
		{
			printf("\\t");
		}
		if (c == ' ')
		{
			printf("\\b");
		}
		putchar(c);
	}
	printf("\n");
}

