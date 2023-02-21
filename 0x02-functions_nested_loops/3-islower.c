/*
 * File: 3-islower.c
 * Auth: Jumana Emad
 */

#include "main.h"

/**
 * _islower - checks if the int given is lower case;
 * @c - input from user
 * Return: 1 if the integer is lower case , 0 otherwise
 */

int _islower(int c)
{
	int n = 123;
	int i;

	for (i = 97; i < n; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
