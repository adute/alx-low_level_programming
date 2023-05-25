#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * using only _putchar
 * @n: number of times \ printed
 * diagonal should end with n
 * if n is o or less print only \n
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
	while (i < n)
	{
		_putchar (' ');
		i++;
	}
		_putchar (92);
		_putchar('\n');
	}
	else
	{
		_putchar ('\n');
	}
}

