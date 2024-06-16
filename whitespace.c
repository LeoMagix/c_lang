#include <stdio.h>

/**
 * Program that prints whitespace characters such as tabs,
 *	backspace, newlines to the terminal
 */

#define EOF	'.'	//Redefined end of file

int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			c = '\b';
			printf("\\n");
		}
		if (c == '\\')
		{
			c = '\b';
			printf("\\");
		}
		if (c == '\t')
		{
			c = '\b';
			printf("\\t");
		}
		if (c == ' ')
		{
			c = '\b';
			printf("\\blnk");
		}
		putchar(c);
	}
	printf("\n");
}

