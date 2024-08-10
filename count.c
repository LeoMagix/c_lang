#include <stdio.h>

/**
 * just a simple counting program
 */

int main()
{
	int count = 0;
	int cnt = 0;
	int x = ++count;
	int y = cnt++;

	printf("X:%d Y:%d\n", x, y);

	while (count <= 28)
	{
		++count;
		printf("Prefix:%d ", count);
		//++count;
	}
	printf("\n");

	while (cnt <= 28)
	{
		//cnt++;
		printf("Postfix:%d ", cnt);
		cnt++;
	} printf("\n");		//legal syntax in C
}
