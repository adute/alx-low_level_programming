#include "holberton.h"

/**
 * print_most_numbers - prints 0-9 excep 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
