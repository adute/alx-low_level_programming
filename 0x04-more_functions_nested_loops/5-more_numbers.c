#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: boid
 */

void more_numbers(void)
{
	int i, j;

	while (i < 10)
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
}
