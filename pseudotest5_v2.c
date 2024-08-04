#include <stdio.h>

/**
 * !jc - Ceasers Cipher: +3
 * The aim of the program is to get the user to enter letters at the prompt,
 * then using a cipher to encode them.
 */

int main()
{
	int c;
	int cifa = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c >= 'a' && c <= 'w') || (c >= 'A' && c <= 'W'))
		{
			cifa = c + 3;
			putchar(cifa);
			//printf("%c", cifa);
		}
		else if ((c >= 'x' && c <= 'z') || (c >= 'X' && c <= 'Z'))
		{
			cifa = c - 23;
			putchar(cifa);
		}
		else
		{
			putchar(c);
		}
	}
}
