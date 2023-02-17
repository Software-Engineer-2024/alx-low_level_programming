/*
 * File: 3-print_alphabet.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet small then capital
 *
 * Return: Always 0.
*/
int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
		putchar(i);
	
	for (j = 65; j < 91; j++)
                putchar(j);

	putchar('\n');

	return (0);
}
