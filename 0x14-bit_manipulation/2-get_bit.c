#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The required bit.
 * @index: The index to get the bit at.
 *
 * Return: If error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	else if ((n & (1 << index)) == 0)
		return (0);

	else return (1);
}
