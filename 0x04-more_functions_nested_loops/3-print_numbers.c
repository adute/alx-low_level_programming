#include "main.h"

/**
 * print_numbers - function prints 0 to 9
 * Return: nnone
 * use _putchar twice only
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar (48 + i);
		i++;
	}
	_putchar('\n');
}
