#include "holberton.h"

/**
 * _puts - function that prints string followe*d by new line
 * @str: variable to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i=0;

	while (*str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
