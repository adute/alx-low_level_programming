#include "main.h"
#include <stdlib.h>
/**
 * create_array -a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string 
 * given as a parameter.
 * @str: the string
 * Return: pointer to the duplicated string on SUCCESS
 * NULL if size = 0 or if it fails
 */
char *_strdup(char *str)
{
	char *p;

	p = malloc(sizeof(*str));

	if (p == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
	p = str;
	}
	return (p);
}
