#include "main.h"

/**
 * print_triangle - draw triangle with spaces at the start.
 *
 *@size: variable
 */

void print_triangle(int size)
{
	int count, i;

	count = 0;
	if (size > 0)
	{
		while (count < size)
		{
			i = size;
			while (i > count + 1)
			{
				i--;
				_putchar(' ');
			}
			while (i > 0)
			{
				_putchar('#');
				i--;
			}
			count++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
