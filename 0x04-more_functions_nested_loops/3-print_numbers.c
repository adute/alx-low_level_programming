#include "holberton.h"

/**
 * print_numbers - prints 0 to 9
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
