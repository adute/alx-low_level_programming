#include "main.h"
#include <stdlib.h>
/**
 * _isdigit - function checks number 0 to 9
 * @c: number to be checked
 * Return: 1 for yes else 0
 *
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

/**
 * mul - function multiplies two numbers
 * @num1: multiple 1
 * @num2: multiple 2
 * Return: multiple of a and b
 */

void mul(int num1, int num2)
{
	int r;

	if (_isdigit(num1) && _isdigit(num2))
	{
		r = num1 * num2;
		_putchar(r);
		_putchar('\n');
	}
}

