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

	p = (char *)malloc(sizeof(str));
	if (*str == '\0')
	{
		return ('\0');
	}
	else
		p = str;
	return (p);
	free(p);
}
