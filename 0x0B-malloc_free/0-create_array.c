#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - function that creats array and initialized wiz specific char
 * @size: size of array
 * @c: character
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = (char *)malloc(size);
	if (size == 0 || p == NULL)
	{
		return ('\0');
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
