#include <stdio.h>

/**
 * just a simple counting program
 */

int main()
{
	int count;

	count = 0;
	while (count <= 28)
	{
		printf("%d\t", count);
		count++;
		printf("%d\n", count);
	}
}
