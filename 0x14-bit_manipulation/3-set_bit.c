#include "main.h"

/**
 * set_bit - sets the value of a certain bit to 1.
 *
 * @n: unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	else
		*n ^= (1 << index);

	return (1);
}
