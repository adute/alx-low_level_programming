#include "holberton.h"

/**
 * _strcat - function appends src to dest
 *@dest: destination char
 *@src: source char
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
		++i;
	for (j = 0; src[j] != '\0'; ++j)
	{
		dest[i] = src[j];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
