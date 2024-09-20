#include <stdio.h>

/**
 * The test.c file is basically just as the name connotes a test source file, what I
 * code in this program are not so random C langauge syntax test. It's my file to test the
 * correctness of certain C syntax, also to test certain logic if they do agree with the tenets of the
 * C language.
 * This aids in my understanding of what is possible or can be done with C, that is its grammatical structure.
 */

/**
 * Just a simple test file
 */

int main()
{
	/*int i = 5;
	int j = 5/2;
	int arrtest[5];
	int k, l;

	l = 1;

	printf("%d\n", j);

	for (k = 0; k <= 5; ++k)
	{
		l = l + k;
	}
	
	k = 0;
	while (k <= 5)
	{
		arrtest[k] = l + k;
		printf("Test array[%d]==%d\n", k, arrtest[k]);
		++k;
	}*/
	
	/*int c, m;
	m = 0;
	c = getchar();
	if (c >= '0' && c <= '9')
	{
		m = c - '1';
		printf("%d\n", m);
		printf("%d\n", c > '1');
	}*/
	//putchar(c);

	/*int arr[5];
	for (i = 5; i >= 0; --i)
	{
		arr[i] = 0;
		printf("%d, ", arr[i - 1]);
	}*/

	/*int test[2] = {k, l};
	printf("K:%d\n", test[1]);*/
	
	/*c = '\0';
	printf("%c", c);*/

	/*while ((c = getchar()) != EOF)
	{
		if (c  == 'i') 
		{
			printf("23,");
		}
		*else
		{
			putchar(c);
		}*
	}*/ printf("\n");

	int t[100];
	int c;
	int m, i = 0;
	while ((c = getchar()) != EOF && m != 100)
	{
		t[m] = c;
		++m;
	}
	t[m] = '\0';
	while (t[i] != '\0')
	{
		if (t[i] != ' ' || t[i] != '\t')
		{
			printf("1st:%d[%c], ", i, t[i]);
			++i;
		}
		
		if ((t[i] == ' ' && t[++i] != ' ') || (t[i] == '\t' && t[++i] != '\t'))
		{
			printf("2nd:%d[%c], ", i, t[i]);
			++i;
		}
	} printf("\n");
}
