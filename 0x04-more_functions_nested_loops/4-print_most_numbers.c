#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 * except 2 & 4
 * use _putchar twice only
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
		_putchar (48 + i);
		i++;
	}
	}
	_putchar ('\n');
}
