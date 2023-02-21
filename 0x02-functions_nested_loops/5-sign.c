/*
 * File: 5-sign.c
 * Auth: Jumana Emad
 */

#include "main.h"

/**
 * print_sign - checks sign of given number;
 * @n : input from user
 * Return: 1 if the integer is positive , 0 if zero , -1 if negative
*/

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
