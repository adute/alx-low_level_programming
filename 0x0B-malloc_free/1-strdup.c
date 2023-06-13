#include "main.h"
#include <stdlib.h>
/**
 * _strdup -a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: the string
 * Return: pointer to the duplicated string on SUCCESS
 * NULL if size = 0 or if it fails
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	p = malloc( sizeof(str) * sizeof(char));

	if (p == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
	p[i] = str[i];
	i++;
	}
	return (p);
}
