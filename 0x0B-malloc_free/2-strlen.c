#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: is the string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
