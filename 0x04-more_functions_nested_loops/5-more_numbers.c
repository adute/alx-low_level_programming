#include "main.h"

/**
 * more_numbers - print 0 to 14
 * followed by new line & 10 times
 *
 */

void more_numbers(void)
{
	int i = 0;
	int j, k;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
		_putchar ('0' + j);
		j++;
		}
		k = 10;
		while (k < 14)
		{
		_putchar('0'+ 1 + k % 10);
		k++;
		}
		_putchar('\n');
		i++;
	}
}
