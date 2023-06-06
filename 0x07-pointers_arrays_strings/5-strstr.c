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

	while (haystack != '\0')
	{
	if (haystack == needle)
	return (haystack++);
	}

	return (NULL);

}
