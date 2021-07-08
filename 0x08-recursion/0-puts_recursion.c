#include "holberton.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	char r = *s;

	if (*s != '\0')
	{
		_putchar(r);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
