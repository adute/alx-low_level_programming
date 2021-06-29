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
	/*int i;
	int len;

	len = _strlen(s);

	for (i = 0; i <= len; i++)*/
	while (*str != '\0')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
