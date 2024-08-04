#include <stdio.h>
#define	MAXLINE	1000	/* Maximum input line size */	

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* Print longest line */
int main()
{
	int len;		/* Current line size */
	int max;		/* Maximum line size */
	char line[MAXLINE];	/* Current input line */
	char longest[MAXLINE];	/* Longest line saved here */

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0)	/* Implies there was a line */
	{
		printf("\n%s", longest);
	}
	return 0;
}

/* Read a line into s, return length */
int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) 
	{
		s[i] = c;
	}
	
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* Copy 'from'; int 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0; 
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}
