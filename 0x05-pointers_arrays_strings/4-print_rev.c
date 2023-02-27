#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string
 * @s: start of a string
 * Return: void.
 */
void print_rev(char *s)
{
	char *str;

	str = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s != str)
	{
		s--;
		_putchar(*s);

	}
	_putchar('\n');
}
