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
void print_alphabet(void)
{
	int n = 123;
	int i;

	for (i = 97; i < n; i++)
		_putchar(i);

	_putchar('\n');

}
