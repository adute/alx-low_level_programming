#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * take a random number,find last digit
 * and test
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* find the last digit */
	m = n % 10;

	printf("Last digit of %d", n);
	if (m > 5)
	{
		printf("is %d and is greater than 5\n", m);
	}
	else if (m == 0)
	{
		printf("is %d and is 0\n", m);
	}
	else if (m < 6 && m != 0)
	{
		printf("is %d and is less than 6 and not 0\n", m);
	}
	return (0);
}
