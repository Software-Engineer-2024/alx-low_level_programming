#include "main.h"

/**
 * _isdigit - checks if the int given is lower case;
 * @c : input from user
 * Return: 1 if the integer is lower case , 0 otherwise
 */

int _isdigit(int c)
{
	int n = 58;
	int i;

	for (i = 48; i < n; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
