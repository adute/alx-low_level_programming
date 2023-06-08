#include "main.h"
/**
 * _strlen - print length of the given string
 * @s: string whose length to be measured
 * Return: the length of string
 *
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _print_rev_recursion - print a string in reverse order
 * @s: string to be printed reversed.
 *
 */
void _print_rev_recursion(char *s)
{
	int i, len;

	len = _strlen(s);
	i = len - 1;
	if (i >= 0)
	{
		_putchar(s[i]);
		--i;
		--s;
		_print_rev_recursion(s );
	}
	else
	_putchar('\n');
}
