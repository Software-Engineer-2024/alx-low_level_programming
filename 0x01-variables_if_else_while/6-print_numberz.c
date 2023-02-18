/*
 * File: 6-print_numberz.c
 * Auth: Jumana Emad
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the numbers as characters
 *
 * Return: Always 0.
*/
int main(void)
{	
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
