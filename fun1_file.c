#include <stdio.h>

/**
 * na simple file to undastand Array
 */

int main(void)
{
	int var[20];
	int i, j;

	i = 0;

	for (i = 0; i < 20; ++i)
	{
		var[i] = 0;
	}

	j = 0;
	while (j < 20)
	{
		//++j;
		if (j % 2 == 0)
		{
			++var[j + 1];
		}
		printf("Var:%d\tVar NxT:%d\n", j, var[j]);
		++j;
	}
	printf("\n");
}
