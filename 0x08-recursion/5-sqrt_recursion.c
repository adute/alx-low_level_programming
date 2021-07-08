#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of numbers
 * @n: number
 *
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	int sqrt = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		sqrt = (n / sqrt + sqrt) / 2;
		return (_sqrt_recursion(n));
	}
}
