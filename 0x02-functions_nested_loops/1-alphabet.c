/*
 * File: 1-alphabet.c
 * Auth: Jumana Emad
 */

#include "main.h"

/**
 * print_alphabet - print the alphabet.
 * main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main()
{	
	int n = 123;
	int i;
	int j;

	for (i = 97; i < n; i++)
		_putchar(i);

	_putchar('\n');
	
	return (0);
}
