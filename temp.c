#include <stdio.h>

/* Employing symbolic constants */
#define	LOWER	0 	//lower limit of the table
#define UPPER	300	//upper limit
#define STEP	20	//step size

/**
 * print Fahrenheit-Celcius table
 *	for fahr = 0, 20, ..., 300
 * A few manipulation of the table: reverse, etc.
 */

/*function-prototype declaration*/
float cel(int fahrenheit);
float fahre(float celcuis);

int main()
{
	printf("FAHRENHEIT-CELCIUS TABLE\n");

	int fahr;
	float celcius;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		printf("%d \t %6.2f\n", fahr, cel(fahr));
	}

	printf("\nCELCIUS-FAHRENHEIT TABLE\n");

	celcius = LOWER;
	while (celcius <= UPPER)
	{
		printf("%.0f \t %7.2f\n", celcius, fahre(celcius));
		celcius += STEP;
	}

	printf("\nREVERSE-JAM:\nFAHRENHEIT-CELCIUS TABLE\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		printf("%d \t %7.2f\n", fahr, cel(fahr));

	}
}

/*function that handles fahrenheit->celcius*/
float cel(int temp)
{
	float celcius;

	celcius = 5.0 / 9 * (temp - 32);
	return celcius;
}

/*function that handles celcius->fahrenheit*/
float fahre(float cel)
{
	float fahrenheit;

	fahrenheit = 9.0 / 5 * (cel + 32);
	return fahrenheit;
}
