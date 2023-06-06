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
 * puts_half - prints half of the character of a string
 * @str: string to be printed
 *
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2;
	}
	while (i <= len - 1)
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
