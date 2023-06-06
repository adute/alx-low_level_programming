#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer string
 * @c: char to found
 * Return: pointer first occurance of c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
	i++;
	s++;
	}
	return (s);
	}
	return (NULL);

}
