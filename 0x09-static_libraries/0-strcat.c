#include "main.h"
#include <stdio.h>
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
}
/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, d, s;
	char *ptr;

	i = 0;
	d = _strlen(dest);
	s = _strlen(src);

	while (i <= s)
	{
		dest[d + i + 1] = src[i];
		i++;
	}
	dest[i] = '\0';
	ptr = dest;

	return (ptr);
}

