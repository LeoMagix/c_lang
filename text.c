#include <stdio.h>

/**
 * This program reads the line of a text and prints the longest line
 */

#define EOF	'~'	//redefined end of file
#define MAXLINE	1000	//maximum input line size

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getlines(void);
void copy(void);

/*print the longest input line*/
int main()
{
	int len;		//maximum line input
	extern int max;		//current line length
	char line[MAXLINE];	//longest line saved here
	
	max = 0;
	while ((len = getlines()) > 0)
	{
		if (len > max)
		{
			max = len;
			copy();
		}
	}

	if (max > 0)		//there was a line
	{
		printf("%s\n", longest);
	}
	return 0;
}

/*getline: specialised version of getline function*/
int getlines(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}

	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

/*copy: copy 'from' into 'to'; assume to is big enough*/
void copy(void)
{
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
	{
		++i;
	}
}
