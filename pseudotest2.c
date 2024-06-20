#include <stdio.h>

/**
 * Just a simple program that assigns random numbers
 *  to an array
 */

#define SIZE	10

int random();

int main()
{
	int arr[SIZE];
	int i;

	for(i = 0; i < SIZE; ++i)
	{
		arr[i] = random();
		printf("Array[%d] is %d\n", i, arr[i]);
	}
}

int random()
{
	int x;

	scanf("%d", &x);
	return x;
}
