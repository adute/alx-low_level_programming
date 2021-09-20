#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: dest char
 * @src: src char
 * @n: n times
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	for (j = 0; j < n; j++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
