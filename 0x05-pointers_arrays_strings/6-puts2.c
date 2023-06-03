#include "main.h"

/**
 * puts2 - prints every ather character of a string
 * @str: string to be printed
 *
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (i <= _strlen(str))
	{
	if (i % 2 == 0)	
		_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
