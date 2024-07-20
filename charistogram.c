#include <stdio.h>

/**
 * This is a simple program, the user enter characters at the command line
 *  and a data of the freqency of different characters is represented on a
 *  histogram. Characters in consideration include:
 *   Whitespace characters-tabs, blanks, newlines
 *   alphabets and
 *   non-alphabet symbols such as [,],(,),#,*,$, etc.
 */

int main()
{
	int c, i, j, npc, letter, nombre, wspace;

	i = npc = letter = nombre = wspace = 0;

	/* int chargram[4] = {letter, wspace, nombre, npc}; */	//This is didin't work as envisioned

	while ((c = getchar()) != EOF)
	{
		/* Check if current character is an alphabet */
		if (c >= 'a' && c <= 'z')
		{
			++letter;
		}
		
		/* Deals with the stipulated whitespace characters */
		else if (c == ' ' || c == '\t' || c == '\n')
		{
			++wspace;
		}
		
		/* Handles charcater if it's a number */ 
		else if (c >= '0' && c <= '9')
		{
			++nombre;
		}
		
		/* The part of the program that computes non-alphabets */
		else
		{
			++npc;
		}
	}
	printf("Letter(s):%d Whitespace:%d Number:%d NPC:%d\n", letter, wspace, nombre, npc);

	/* We assign the computed values using them to initialize the array */
	int chargram[4] = {letter, wspace, nombre, npc};

	/* This part of the program deals with printing our histogram bars. 
	 * Working on a vertical representation of the histogram */ 
	while (i < 4)
	{
		for (j = 0; j < chargram[i]; ++j)
		{
			printf("||");
		}
		printf("\n");
		++i;
	}
}
