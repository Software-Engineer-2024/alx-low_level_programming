/*
 * File: 8-print_base16.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the hexadecimal numbers
 *
 * Return: Always 0.
*/
int main(void)
{
	int i;
	int z;

	for (z=48; z<58; z++)
		putchar(z);

	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
