/*
 * File: 0-positive_or_negative.c
 * Auth: Jumana Emad
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - states whether a number is positive, negative, or zero.
 *
 * Return: Always 0.
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
