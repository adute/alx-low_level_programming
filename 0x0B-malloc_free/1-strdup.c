#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - function thatrtrn pointer to newly allocated memory
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *p;

	p = (char *)malloc(sizeof(s));
	if (*str == '\0')
	{
		return ('\0');
	}
	p = str;
	return (p);
	free(p);
}
