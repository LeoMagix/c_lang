#include <stdio.h>

/**
 * simple program to count the number of lines
 */

#define EOF	'.'	//Redefined end-of-file

int main()
{
	int c;
	int n_line = 1;
	
	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			//n_line = 1;
			++n_line;
		}
	}
	/*Won't execute due to infinite loop induced by no EOF input*/
	printf("Line(s):%d\n", n_line);		//Found a temporary way around the problem.
}
