#include "holberton.h"

/**
 * is_prime_number - checkes if the num is prime
 * @n: intiger to be checked
 *
 * Return: 1 if yes
 * 0: if not
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		is_prime_number(n % i);
	}
	return  (1);
}
