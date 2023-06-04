#include "main.h"

/**
 * puts2 - prints every ather character of a string
 * @str: string to be printed
 *
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	while (i <= len)
	{
	if (i % 2 == 0)	
	{
		_putchar(str[i]);
	}
	i++;
	}
	_putchar('\n');
}
