#include <stdio.h>

/**
 * How to write functions in C:
 * 	Simple program that gives the result
 * 	of an integer x, raised to a positive power y.
 */

/*function declaration*/
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

/*The power function itself: function definition*/
int power(int base, int n)	//return-type fn_name(parameters...)
{								
	//base multiplies itself nth-power number of times
	int p;

	for (p = 1; n > 0; --n)		//base multi[plies itself ith-power number of times
	{
		p = p * base;
	}
	return p;
}
