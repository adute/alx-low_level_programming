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
	unsigned int s = sizeof(str);

	p = (char *)malloc(s + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while(s)
		p[s - 1] = str[s - 1];
	return (p);
	free(p);
}
