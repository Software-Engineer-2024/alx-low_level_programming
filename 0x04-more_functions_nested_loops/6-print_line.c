#include "main.h"

/**
 *print_line - print a number of dashes creating a line
 *@n : number of dashes
 *Return : void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
