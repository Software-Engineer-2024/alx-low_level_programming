/*
 * File: 4-isalpha.c
 * Auth: Jumana Emad
 */

#include "main.h"

/**
 * _isalpha - checks if the int given is upper case;
 * @c : input from user
 *
 * Return: 1 if the integer is lower case , 0 otherwise
 */

int _isalpha(int c)
{
	int n = 91;
	int i;
	int j;

	for (i = 65; i < n; i++)
	{
		if (c == i)
			return (1);
	}

	for (j = 97; j < 123; j++)
	{
		if (c == j)
			return (1);
	}

	return (0);
}
