#include "main.h"

/**
 *print_diagonal - print a number of slashes creating a slanted line
 *@n : number of slashes
 *Return : void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		if ((i + 1) < n)
		{
		_putchar('\n');
		for (j = 0 ; j <= i ; j++)
		_putchar(32);

		}
	}
	_putchar('\n');
}
