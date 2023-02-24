#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9.
 * except 2 and 4
 * Return: void
 */
void print_numbers(void)
{
	int n = 58;
	int i;

	for (i = 48; i < n; i++)
  {
    if ((i != 50) && (i != 52))
		  _putchar(i);
  }
	_putchar('\n');
}
