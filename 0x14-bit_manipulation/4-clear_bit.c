#include "main.h"

/**
 * clear_bit - sets the value of a certain bit to 0
 *
 * @n: unsigned long integer
 * @index: position of the bit
 *
 * Return: 1 if successful or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	number = number << index;
	*n = *n & ~number;
	return (1);
}
