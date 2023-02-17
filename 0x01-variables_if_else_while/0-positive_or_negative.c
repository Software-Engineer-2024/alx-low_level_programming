#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * checking if n is negative
 * checking if it is positive
 * if it is neither then it is defenitley a zero
 */
/**
 *Check if a number is greater than 0
 * @n: The number to be checked
 *
 * Return: 0 if the file is succesfull.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else 
{
printf("%d is zero\n", n);
}
return (0);
}
