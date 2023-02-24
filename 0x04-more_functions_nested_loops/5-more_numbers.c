#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14  10 times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int rem;
	char c;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 10)
			{
				c = '0' + i;
			}
			else
			{
				_putchar(49);
				rem = i % 10;
				c = '0' + rem;
			}
			_putchar(c);
		}
		_putchar('\n');

	}
}
