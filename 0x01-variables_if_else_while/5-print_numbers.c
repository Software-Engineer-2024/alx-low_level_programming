/*
 * File: 5-print_numbers.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints single numbers 0 to 9
 *
 * Return: Always 0.
*/
int main(void)
{
	int n = 10;
	int i;

	for (i = 0; i < n; i++)
		printf("%d", i);

	printf("\n");

	return (0);
}
