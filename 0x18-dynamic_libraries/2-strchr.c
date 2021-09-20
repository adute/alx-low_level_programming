#include "main.h"

/**
 * _strchr - function that locates character string
 * @s: the string
 * @c: the charater
 *
 * Return: c if found
 * NULL: if not
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0' && c != '\0')
	{
		while (s[i] != c)
		{
			i++;
		}
		if (s[i] == c)
		{
			return (s);
		}
	}
	return ('\0');
}
