#include "holberton.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: byte
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
