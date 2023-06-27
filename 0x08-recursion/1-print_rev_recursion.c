#include "main.h"
/**
 * _strlen_recursion - print length of the given string
 * @s: string whose length to be measured
 * Return: the length of string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
/**
  * _print_rev_recursion - print a string reversed, recursively
  * @s: the string
  *
  */
void _print_rev_recursion(char *s)
{
	int len;

	len = _strlen_recursion(s);
	 if (len != 0)
	{
		_putchar(s[len]);
		len--;
		_print_rev_recursion(s);
	}
	else
		_putchar('\n');
}
