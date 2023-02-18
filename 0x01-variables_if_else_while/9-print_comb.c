/*
 * File: 9-print_comb.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the numbers followed by , then space
 *
 * Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
