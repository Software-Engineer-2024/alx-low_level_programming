#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints string
 * @str: start of a string
 * Return: void.
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (*str != '\0')
	{
		if ((index % 2) == 0)
		{
		_putchar(*str);
		}
		index++;
		str++;

	}
	_putchar('\n');
}
