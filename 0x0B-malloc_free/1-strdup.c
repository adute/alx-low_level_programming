#include "main.h"
#include <stdlib.h>
/**
 * _strlen - print length of the given string
 * @s: string whose length to be measured
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
}/**
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
	int len;
	int i = 0;

	len = _strlen(str);
	p = malloc(len * sizeof(char));

	if (p == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
	p[i] = str[i];
	i++;
	}
	p[i] = '\0';
	return (p);
}
