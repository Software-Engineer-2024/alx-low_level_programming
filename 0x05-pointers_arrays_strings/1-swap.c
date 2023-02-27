#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap a and b
 * @a : input of user
 * @b: input by user
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
