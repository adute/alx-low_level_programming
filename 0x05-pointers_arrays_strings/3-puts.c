#include "holberton.h"

/**
 * _puts - function that prints string followe*d by new line
 * @str: variable to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	char s = *str;
	
	while (*s != '\0')
	{
		_putchar(s);
	}
	_putchar('\n');
}
