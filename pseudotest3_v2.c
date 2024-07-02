#include <stdio.h>

/**
 * testing, testing, texting
 */

/* I am trying to create a dynamic program where array size is determined
 * by text from user input, however, at the moment I cannot without prior initialisation 
 * of the array with a value or size. 
 * Further array knowledge definitely required.
 */

int main()
{
	int i, size, c, t;
	char arr[] = {putchar(c)};

	i = size = 0;

	while ((c = getchar()) != EOF)
	{
		//c = getchar();
		arr[size] = putchar(c);
		++size;
	}

	printf("\n%c\n", arr[2]);

	/*while(text[i + 1] != EOF)
	{
		++size;
	}
	printf("%d\n", size);*/

	/*while ((c = getchar()) != EOF)
	{
		text[i] = putchar(c);
		++i;
	}*/
}
