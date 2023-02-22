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

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
