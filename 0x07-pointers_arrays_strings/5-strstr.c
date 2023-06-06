#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer string
 * @needle: string to found
 * Return: pointer first occurance of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
	if (haystack == needle)
		i++;
	return (haystack);
	}

	return (NULL);

}
