#include "main.h"

/**
 * print_number - prints integer
 * @n: num to be printed
 *
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar ('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n > 0 )
	{
		_putchar (n / 10 + '0');
		_putchar (n % 10 + '0');
	}
	_putchar('\n');
}
