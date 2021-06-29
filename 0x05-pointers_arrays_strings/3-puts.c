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
	int i;

	for (i = 0; i <= _strlen(str); i++)
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
