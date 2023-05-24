#include "main.h"

/**
 * print_alphabet_x10- prints lower case x 10
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
