/*
 * File: 0-putchar.c
 * Auth: Jumana Emad
 */

#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
		_putchar(str[i]);

	_putchar('\n');

	return (0);
}
