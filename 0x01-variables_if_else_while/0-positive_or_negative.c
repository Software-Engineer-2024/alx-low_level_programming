#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* checking if n is negative then checking if it is positive if it is neither then it is defenitley a zero */
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
