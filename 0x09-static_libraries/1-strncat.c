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
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: most n bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int d, s;
	char *ptr;

	d = _strlen(dest);
	s = _strlen(src);
	n = 0;

	while (i <= s)
	{
		if (src[i] != *dest)
		{
			n++;
			i++;
		}
		else
		dest[d + n + 1] = src[i];
	}
	ptr = dest;

	return (ptr);
}

