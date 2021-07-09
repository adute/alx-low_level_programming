#include "holberton.h"

/**
 * _strncat - function concatinates two strings
 * @dest: dest char
 * @src: src char
 * @n: n byte
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
