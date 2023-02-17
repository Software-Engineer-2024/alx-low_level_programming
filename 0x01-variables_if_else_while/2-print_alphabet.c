/*
 * File: 2-print_alphabet.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0.
*/
int main(void)
{
	int n = 123;
	int i;

	for (i = 97; i < n; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
