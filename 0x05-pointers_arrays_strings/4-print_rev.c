#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: string to be printed
 *
 */
void print_rev(char *s)
{
	int i, len;
	
	len = _strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
