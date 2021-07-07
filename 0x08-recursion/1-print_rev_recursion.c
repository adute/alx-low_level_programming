#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char r = *s;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(r);
	}
}
