#include <stdio.h>

/**
 * !jc - ceaser's cipher
 */

int main()
{
	//No syntax issues, logic issues probably
	char decode[7];	//the limited array knowledge problem encountered
	int i, czah, cyfa;

	i = 0;

	while ((czah = getchar()) != EOF && i < 5)
	{
		czah = getchar();
		decode[i] = putchar(czah);
		printf("%c", decode[i]);
		++i;
	}

	for (cyfa = 5; cyfa >= 0; --cyfa)
	{
		decode[cyfa] = czah + 2;
		printf("%c", decode[cyfa]);
	}
	printf("\n");
}
