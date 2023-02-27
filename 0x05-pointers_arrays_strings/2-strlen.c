#include "main.h"
#include <stdio.h>

/**
 * _strlen - get length of string
 * @s: start of a string
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;

	}
	return (len);
}
