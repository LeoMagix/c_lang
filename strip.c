#include <stdio.h>

/**
 * In this program with the use of functions we deal with trailing blanks 
 * and tabs, also delete completely lines with no alphanumeric characters
 */

#define	SIZE	1000

int get_str(char t[], int size);
char strip(char ns[], char s[]);
char reverse(char string[], int l);

int main()
{
	char str[SIZE];
	char n_str[SIZE];
	char re_str[SIZE];
	int text, max;

	max = get_str(str, SIZE);
	if (max > 0)
	{
		printf("%s\n", str);
	} 
	printf("%d\n", max);

	strip(n_str, str);
	printf("%s\n", n_str);
	//reverse(neat_str, max);
}

/* get_str: Gets text from the prompt */
int get_str(char a[], int lim)
{
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)
	{
		a[i] = c;
	}
	a[i] = '\0';
	return i;
}

/* strip: If current character is a blank or tab check if the next character is a blank or tab
 * Rid text of extra spaces, deletes completely blank lines 
 * 16|09|24:Can't write strip function to do the task effectively, yet!
 * 07|10|24:Challenge to solve "segmentation fault"*/
char strip (char ntxt[], char txt[])
{
	int i, j = 0;

	while (txt[i] != '\0')
	{
		if (i == 0)
		{
			ntxt[i] = txt[i];
			++i;
		}
		if ((txt[i] == ' ' || txt[i] == '\t') && txt[++i] != txt[i])
		{
			ntxt[i] = txt[i];
			++i;
		}
		else
		{
			ntxt[i] = txt[i];
			++i;
		}
	}
}

/* Reverse; let's put it in reverse. 
 * The function reverses text by character 
 * 16|09|24: modify reverse function to need only one argument*/
char reverse(char txt[], int m)
{
	while (m > 0)
	{
		--m;
		printf("%c", txt[m]);
	}
	printf("\n");
}
