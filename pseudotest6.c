#include <stdio.h>

/**
 * start star(or asterisk) fun
 */

int star();
char star_tab();

int main()
{
	int i = 0;

	star();
	printf("\n");
	for (i = 0; i < 5; ++i)
	{
		star_tab();
		printf("\n");
	}
	star();
	printf("\n");
}

int star()
{
	int j;

	for (j = 0; j < 5; ++j)
	{
		printf("*");
	}
	//return;
}

char star_tab()
{
	int j;
	char k = ' ';

	for (j = 0; j < 5; ++j)
	{
		if (j == 0 || j == 4)
		{
			printf("*");
		}
		else
		{
			printf("%c", k);
		}
	}
	//return;
}

