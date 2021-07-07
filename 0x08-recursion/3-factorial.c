#include "holberton.h"

/**
 * factorial - function that calculates factorial of given number
 * @n: number
 *
 * Return: n for number>1
 * -1: if n <0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 && n == 1)
	{
		return (1);
	}
	n = n * factorial(n);
	return (n);
}
