#include <stdio.h>

/**
 * Displays the shape "1" to the command line.
 *  The user enters a number that is used to form the shape,
 *  using characters.
 */

int print_eq(int hor);
int print_vb(int ver);
int print_equal(int equal);

int main()
{
	int i, num;

	scanf("%d", &num);

	print_eq(num);

	i = 0;
	while (i <= num)
	{
		print_vb(num);
		++i;
	}

	print_equal(num);
}

/*print  horizontal character equal to 1/2 * number enter by the user*/
int print_eq(int numba)
{
	int i = 0;

	i = 0;
        while (i <= numba)
        {
		if (i == (numba/2))
		{
			printf("||");
			break;
		}
                printf("|");
                ++i;
	}
	printf("\n");
}

/*Handles the printing of the vertical bar*/
int print_vb(int num)
{
	int j, k;

	for (j = 0; j <= num; ++j)
        {
                if (j == (num/2))
                {
                        printf("||");
                }
                else
                {
                        printf(" ");
                }
        }
	printf("\n");
}

/*prints complete set of horizontal character*/
int print_equal(int nombre)
{
	int i = 1;

	while (i <= nombre)
	{
		printf("|");
		++i;
	}
	printf("||");
	printf("\n");
}
