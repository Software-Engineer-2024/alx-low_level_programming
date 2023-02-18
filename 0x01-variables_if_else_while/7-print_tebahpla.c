/*
 * File: 7-print_tebahpla.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet in reverse
 *
 * Return: Always 0.
*/
int main(void)
{
	int n = 96;
	int i;

	for (i = 122; i > n; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
