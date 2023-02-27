#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * @str: start of a string
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
