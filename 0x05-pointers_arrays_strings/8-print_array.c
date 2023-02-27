#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array elements separated by comma
 * @str: start of a string
 * Return: void.
 */
void print_array(int *a, int n)
{
	int index;

	for(index = 0; index < n; index++)
	{
		printf("%d",a[index]);
		if(index != (n - 1))
		{	
		printf(", ");
		}

	}
	printf("\n");
}
