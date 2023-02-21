/*
 * File: 2-print_alphabet_x10.c
 * Auth: Jumana Emad
 */

#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 * main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int n = 123;
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < n; i++)
			_putchar(i);

		_putchar('\n');

	}
}
