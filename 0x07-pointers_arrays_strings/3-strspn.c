#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: prefix
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (accept[i] == *s)
			n++;
		i++;
	}
	return (n);
}
