#include "main.h"

/**
 *print_square - print a number of pounds creating a square
 *@n : number of #
 *Return : void
 */

void print_square(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		if (i != n-1)
		_putchar('\n');
	}
	_putchar('\n');
}
