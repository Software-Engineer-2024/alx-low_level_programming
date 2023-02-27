#include "main.h"
#include <stdio.h>

/**
 * _strcpy - prints string
 * @dest: string to be copied to
 * @src: string to be copied from
 * Return: pointer to copied str.
 */
char *_strcpy(char *dest, char *src)
{
	int length;

	length = 0;
	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}

	dest[length]  = src[length];
	return dest;

}
