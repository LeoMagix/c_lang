#include <stdio.h>

/**
 * Anoda file to use catch cruz
 */

int main(void)
{
	int c;

	c = 35;

	printf("%d is %c\n", c, c);		//Employing the use of format specifiers to explore character constant

	c = getchar();		//Check to see if you can reassign a variable with a value having a different data type
	putchar(c);
	printf("\n");

	char xter;		//Test to see how declaring a variable in the middle of your program behaves, not my convention
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
