#include <stdio.h>

/**
 * I will give you a description if you work--
 * update*: the user inputs a number until a negative number is entered 
 *   then it outputs the sum. 
 */

int main()
{
	int num;
	int sum = 0;
	
	printf("Please enter a number:\n");
	scanf("%d", &num);

	while (num >= 0)
	{
		sum += num;
		scanf("%d", &num);	//little problem:Can't prevent the program asking user for one more input
	}				//  after the negative number is entered by the user.**Fixed it.
	printf("The total sum is %d\n", sum); 
	/*C executes our code top to bottom, something i didn't take cognisance of when writing the program, 
	 * this was the cause of our bug*/
}
