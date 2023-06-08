#include "main.h"
/**
 * factorial - calculates factorial of a givrn number
 * @n: number to be used
 * Return: -1 if n < 0
 * factorial 0 is 1
 *
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		fact = 1;
	}
	else
		fact = n * factorial(n - 1);

	return (fact);
}
