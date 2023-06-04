#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse order
 * @s: string to be printed
 *
 */
void print_rev(char *s)
{
	int i, len;
	
	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
