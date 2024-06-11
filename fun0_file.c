#include <stdio.h>

/**
 * Anoda file to use catch cruz
 */

#define EOF	'~'

int main(void)
{
	int c;

	c = 35;

	printf("%c%c\n", c, c);

	c = getchar();
	putchar(c);
	printf("\n");

	char xter;		//just wanted to see how declaring a variable in the mioddle of your program
				// behaves, not my convention
	xter = getchar();
	while (xter != EOF)
	{
		if (xter == 'c' || xter == 'C')
		{
			xter = '\b';
			printf("'XXXX'");
		}
		putchar(xter);
		xter = getchar();
	}
	printf("\n");
}
