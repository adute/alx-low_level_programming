#include "holberton.h"
int _strlen(char *s);

/**
 * _puts - function that prints string followe*d by new line
 * @str: variable to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;
	int len;

	len = _strlen(str);

	for (i = 0; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
