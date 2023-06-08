#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse order
 * @s: string to be printed reversed.
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(s[i]);
		--i;
		--s;
		_print_rev_recursion(s );
	}
	else
	_putchar('\n');
}
