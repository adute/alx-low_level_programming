#include "main.h"

/**
 * _strlen_recursion - print length of the given string
 * @s: string whose length to be measured
 * Return: the length of string
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
