#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - function thatrtrn pointer to newly allocated memory
 * @str: string
 *
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *p;
	int l = _strlen(str); 

	p = (char *)malloc(l);
	if (*str == '\0')
	{
		return ('\0');
	}
	p = str;
	return (p);
	free(p);
}
