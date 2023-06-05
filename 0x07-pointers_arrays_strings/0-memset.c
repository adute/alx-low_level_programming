#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @n: bytes o the memory area
 * @s: char containing
 * @b: constant to fill s
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i <= n)
	{
		s[i] = b;
	}
	return (*s);
}
