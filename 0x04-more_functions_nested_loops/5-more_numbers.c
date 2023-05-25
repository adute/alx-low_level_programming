#include "main.h"

/**
 * more_numbers - print 0 to 14
 * followed by new line & 10 times
 *
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
		_putchar (48 + j);
		j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
