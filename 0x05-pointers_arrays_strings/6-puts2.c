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
 * puts2 - prints every ather character of a string
 * @str: string to be printed
 *
 */
void puts2(char *str)
{
	int i, len;

	len = _strlen(str);
	i = 0;

	while (i <= len - 1)
	{
	if (i % 2 == 0)
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
