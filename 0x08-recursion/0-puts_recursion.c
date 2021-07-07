#include "holberton.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;
	char r;

	while (s[i] != '\0')
	{
		r = s[i];
		_putchar(r);
		i++;
	}
	_putchar('\n');
}
