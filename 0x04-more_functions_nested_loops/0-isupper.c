/*
 * File: 0-isupper.c
 * Auth: Jumana Emad
 */

#include "main.h"

/**
 * _isupper - checks if the int given is lower case;
 * @c : input from user
 * Return: 1 if the integer is lower case , 0 otherwise
 */

int _isupper(int c)
{
	int n = 91;
	int i;

	for (i = 65; i < n; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
