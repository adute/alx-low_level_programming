#include "main.h"
/**
 * _pow_recursion - calculate x the power of y
 * @x: base number
 * @y: exponent
 * Return: -1 if y < 0
 *
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		pow = 1;
	}
	else
		pow = x * _pow_recursion(x, y - 1);

	return (pow);
}
