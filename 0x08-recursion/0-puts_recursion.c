#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to be printes
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		s++;
	_puts_recursion(s);
	}
	else
	_putchar('\n');
}
