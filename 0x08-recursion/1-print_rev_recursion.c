#include "holberton.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char r;
	
	if (s[i] != '\0')
	{
		_print_rev_recursion(s);
		_putchar(r);
	}/*
	j = i - 1;
	while (j < 0)
	{
		r = s[j];
		_putchar(r);
		j--;
	}*/
}
