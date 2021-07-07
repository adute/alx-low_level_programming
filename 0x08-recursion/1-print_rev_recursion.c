#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	int j;
	char r;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j < 0)
	{
		r = s[j];
		_putchar(r);
		j--;
	}
}
