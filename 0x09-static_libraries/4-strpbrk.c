#include "main.h"
/**
 * _strpbrk - function that searches a string
 * for any of a set of bytes
 * @s: string
 * @accept: prefix
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	char *r;

	while (s[i] != '\0')
	{
		if (accept[i] != *s)
		{
		i++;
		s++;
		}
		else
		r = s++;
	}
	return (r);
}
