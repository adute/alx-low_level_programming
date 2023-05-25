#include "main.h"

/**
 * print_line - draws straightline
 * use only _putchar
 * @n: number of times the character _ printed
 * the line should end with new line
 * if n is 0 or less print \n
 *
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar ('_');
			i++;
		}
		_putchar('\n');
	}
}
