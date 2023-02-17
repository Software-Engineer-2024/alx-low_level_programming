/*
 * File: 4-print_alphabet.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet except q and e 
 *
 * Return: Always 0.
*/
int main(void)
{
	int n = 123;
	int i;

	for (i = 97; i < n; i++)
	{
		if (i == 101 || i == 113)
			continue;	
		putchar(i);
	}
	putchar('\n');

	return (0);
}
