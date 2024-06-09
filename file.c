#include <stdio.h>

/**
 * Its just a program I can't really
 *  tell you what it does
 */

int main(void)
{
	int i, num, numba;

	num = numba = 0;

	for (i = 0; i < 10; ++i)
	{
		++num;
		if (i % 2 != 0)
		{
			printf("Odd:%d, ", num);
		}
		else
		{
			printf("Even:%d, ", num);
		}
		//++num;
	}
	printf("\n");
	printf("Number:%d\n", num);
	printf("\n");

	while (numba < 20)
	{
		++numba;
		if ((numba / 2) >= 2 && (numba / 2) <= 5)
		{
			printf("fudge");
		}

		else if ((numba/2) >= 6 && (numba/2) < 10)
		{
			printf("budge");
		}

		else
		{
			printf("NoT");
		}
		//++numba;
	}
	printf("\n");
	printf("Numba-%d\n", numba);
}
