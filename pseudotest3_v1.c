#include <stdio.h>

/**
 * This is a program that prints string of characters in
 *  reverse
 */

int main()
{
	char arrtxt[13] = "I love Jesus!";
	int i;

	for (i = 13; i >= 0; --i)
	{
		printf("%c\n", arrtxt[i]);
	}
}
