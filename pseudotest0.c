#include <stdio.h>

/**
 * test out pseudocode
 */

int main()
{
	int num1 = 10;
	int num2 = 6;
	int num3 = 8;

	printf("Sorts number in ascending order\n");

	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
		{
			printf("%d,%d,%d\n", num3, num2, num1);
		}
		else
		{
			printf("%d,%d,%d\n", num2, num3, num1);
		}
	}

	else if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3)
		{
			printf("%d,%d,%d\n", num3, num1, num2);
		}
		else
		{
			printf("%d,%d,%d\n", num1, num3, num2);
		}
	}

	else if (num3 > num1 && num3 > num2)
	{
		if (num1 > num2)
		{
			printf("%d,%d,%d\n", num2, num1, num3);
		}
		else
		{
			printf("%d,%d,%d\n", num1, num2, num3);
		}
	}

	else
	{
		printf("%d=%d=%d\n", num1, num2, num3);
	}
}
