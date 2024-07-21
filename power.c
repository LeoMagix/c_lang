#include <stdio.h>

/**
 * How to write functions in C:
 *  >Function definition !not Function declaration
 *  >The scope of variables used;local or global
*/

/* To practice functions, we'll create a basic power function 
 * that gives the result of an integer x raised to a positive power y.
 */

/* Function declaration */
int power(int x, int y);		//function prototype

int main()
{
	int i;

	for (i = 0; i <= 10; ++i)
	{
		printf("%2d %4d %7d %6d\n", i, power(0, i), power(5, i), power(-3, i));
	}
	return 0;
}

/* Function definition: The power function itself
 * return-type fn_name(parameters,...) */
int power(int base, int n)
{								
	/* Base multiplies itself nth-power number of times */
	int p;

	for (p = 1; n > 0; --n)
	{
		p = p * base;
	}
	return p;
}
