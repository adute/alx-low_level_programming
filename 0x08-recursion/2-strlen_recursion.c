#include "main.h"

/**
 * _strlen_recursion - print length of the given string
 * @s: string whose length to be measured
 * Return: the length of string
 *
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		len = 1;
	}
	else
	{
		len++;
		s++;
	        _strlen_recursion(s);
	}
	return (len);
}
