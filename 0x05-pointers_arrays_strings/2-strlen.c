#include "main.h"

/**
 * _strlen - print length of string
 * @s: string to be measured
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
