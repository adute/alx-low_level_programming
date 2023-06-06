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
 * print_rev - print a string in reverse order
 * @s: string to be printed reversed.
 *
 */
void print_rev(char *s)
{
	int i, len;
	
	len = _strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
