#include <stdio.h>

/**
 * I don't have a program description right now
 * *Ok it's a program that replaces every third element of an array with the number 10
 */

int main()
{
	int arrtxt[13] = {'w', 'e', ' ', 'g', 'r','e','a','t',' ','b','o','y','!'};

	int i;

	for (i = 0; i < 13; ++i)
	{
		if (i % 3 == 0 && i != 0)
		{
			arrtxt[i] = 10;
			printf("%d", arrtxt[i]);
		}
		else
		{
			printf("%c", arrtxt[i]);
		}
	}
	printf("\n");
}
