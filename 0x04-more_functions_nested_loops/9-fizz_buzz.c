#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 with a little twist
 * prints fizz if number is divisable by 3 , buzz if divisable by 5
 * fizz buzz if divisable by both
 *
 * Return: always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
		{
			if (i != 100)
				printf("Buzz ");
			else
				printf("Buzz\n");
		}
		else
			printf("%d ", i);
	}
	return (0);
}
