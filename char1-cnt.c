#include <stdio.h>

/**
 * program to count number of characters
 */

#define EOF	'.'	//Defined '.', to indicate end of file

int main()
{
	int nc;
	
	/*loops, while or for, work as intended*/   
	for (nc = 0; getchar() != EOF; ++nc)
	{
		;	//for-loop block must have a statement, hence the NULL statement
			//	*update:more of a stlye requirement than syntax demand
	}
	/*computed value of nc is not available to printf
	 * if printf is used outside of loop.
	 * 	*update--we are in an infinite loop, we never
	 * 		reach end of file(can't confirm its value for now).
	 */
	printf("Number of characters:%d\n", nc);	//By-passed the issue with an alternate value for EOF
}							//*update:ctrl-D on keyboard to enter EOF.	
