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

/*external variables*/
float celcius;	//variable definition
int fahr;

/*function-prototype declaration*/
float cel(void);
float fahre(void);

int main()
{
	printf("FAHRENHEIT-CELCIUS TABLE\n");

	//extern int fahr;	//variable declaration
	//extern float celcius;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		printf("%d \t %6.2f\n", fahr, cel());
	}

	printf("\nCELCIUS-FAHRENHEIT TABLE\n");

	celcius = LOWER;
	while (celcius <= UPPER)
	{
		printf("%.0f \t %7.2f\n", celcius, fahre());
		celcius += STEP;
	}

	printf("\nREVERSE-JAM:\nFAHRENHEIT-CELCIUS TABLE\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
	{
		printf("%d \t %7.2f\n", fahr, cel());

	}
}

/*function that handles fahrenheit->celcius*/
float cel(void)
{
	//extern float celcius;
	//extern int fahr;

	celcius = 5.0 / 9 * (fahr - 32);
	return celcius;
}

/*function that handles celcius->fahrenheit*/
float fahre(void)
{
	//extern float celcius;
	//extern int fahr;

	fahr = 9.0 / 5 * (celcius + 32);
	return fahr;
}
