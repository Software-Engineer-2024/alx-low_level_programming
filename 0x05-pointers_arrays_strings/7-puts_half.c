#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of string
 * @str: start of a string
 * Return: void.
 */
void puts_half(char *str)
{
	int length, index;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (index = ((length - 1) / 2) + 1; index <= length - 1; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
