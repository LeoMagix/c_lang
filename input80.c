#include <stdio.h>

/**
 * The program prints the string of characters only if the length of
 * characters is equal to or greater than eighty(80)
 */

#define SIZE	1000

int input80(char s[], int max);
int print80(char str[], int txt_len);

int main()
{
	char xter[SIZE];
	int len;

	len = input80(xter, SIZE); 	//Assigns the value returned from the function input80 to len
	if (len > 0)
	{
		printf("\nLength of text, %d\n", len);
	}
	print80(xter, len);	//Handles the printing of the character string	
	return 0;
}

/* Manages the length of characters and returns length.
 * The input80 function act as a medium to initalize and store characters in the array */
int input80(char s[], int lim)
{
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)	//The expression lim - 1, curtails storage overflow 
	{
		s[i] = c;	//Stores the inputed characters contigiously in memory
	}
	s[i] = '\0';
	
	if (i >= 80)	//The control part of program, is character stream equal to or greater than 80?
	{
		return i;
	}
	else
	{
		//i = 0;
		printf("\n'Length of text is less than eighty(80)'\n");
		return 0;
	}
}

/* Prints the text if it is eighty or more characters */
int print80(char str[], int x)
{
	if (x > 0)
	{
		printf("%s\n", str);
	}
}
