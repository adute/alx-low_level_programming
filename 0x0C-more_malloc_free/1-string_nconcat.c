#include "main.h"
#include <stdlib.h>
/**
 * _strlen - print length of the given string
 * @s: string whose length to be measured
 * Return: the length of string
 *
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: destination
 * @s2: source
 * @n: most n bytes from src
 * Return: pointer shall point to a newly allocated space in memory
 * which contains s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int len1;
	char *ptr;

	len1 = _strlen(s1);
	/*len2 = _strlen(s2);*/

	ptr = malloc(len1 + n + 1);
	
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = s1;
	while (i < len1)
	{
		ptr++;
		i++;
	}

	while (n--)
	{
		if (!(*ptr++ = *s2++))
		{
			return (s1);
		}

	}
	*ptr = '\0';

	return (s1);
}

