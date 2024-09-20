#include <stdio.h>

/**
 * just a simple counting program;
 * >>Prefix arithmetic operation: Use the value before increasing/decreasing
 * >>Postfix arithmetic operation: Increase/decrease value after using it
 */

int main()
{
	int count = 0;
	int cnt = 0;
	int x = ++count;	//test to see how far I can push variable assignment/initialization in C
	int y = cnt++;		//test to see how far I can push variable assignment/initialization in C

	printf("X:%d Y:%d\n", x, y);

	while (count <= 28)
	{
		++count;	//Prefix increment of the variable count
		printf("Prefix:%d ", count);
		//++count;
	}
	printf("\n");

	while (cnt <= 28)
	{
		//cnt++;
		printf("Postfix:%d ", cnt);
		cnt++;		//postfix increment of the variable cnt
	} printf("\n");		//legal syntax in C
}
