#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string to be printed
 *
 */
void print_rev(char *s)
{
	int i, len;
	char *a, *b, temp;

	len = 0;
	a = s;
	b = s;
	i = 0;

	while (*s != 0)
	{
		len++;
		s++;
	}
	while (i < len - 1)
	{
		b++;
		i++;
	}
	while (i < len/2)
	{
		temp = *a;
		*a = *b;
		*b = temp;

		b++;
		a--;
	}
	_putchar('\n');
}
