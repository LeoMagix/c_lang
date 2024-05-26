#include <stdio.h>

/**
 * Simple progran to that gives informarion on amount of bytes
 *  allocated for the different data types in the machine
 */

int main()
{
	printf("Integer:%ld byte(s)\n", sizeof(int));
	printf("Char:%ld byte(s)\n", sizeof(char));
	printf("Float:%ld byte(s)\n", sizeof(float));
	printf("Double:%ld byte(s)\n", sizeof(double));
	printf("\n");
	printf("Short integer:%ld byte(s)\n", sizeof(short int));
	printf("Long integer:%ld byte(s)\n", sizeof(long int));
	printf("\n");
	printf("Unsigned integer:%ld byte(s)\n", sizeof(unsigned int));
	printf("Unsigned char:%ld byte(s)\n", sizeof(unsigned char));
	//printf("Unsigned float:%ld byte(s)\n", sizeof(unsigned float));
	//printf("signed double:%ld byte(s)\n", sizeof(signed double));
	printf("\n");
	printf("Signed integer:%ld byte(s)\n", sizeof(signed int));
	printf("Signed char:%ld byte(s)\n", sizeof(signed char));
}
