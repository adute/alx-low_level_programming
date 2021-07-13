#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - function that crts array of char, and initializes it with specific char
 * @size: array size
 * @c: character
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;
	
	*p = malloc(size);

	if (size == 0)
	{
		return ('\0');
	}
	else 
		for (i == 0; i < size; i++)
		{
			p = c[i];
			return (p);
		}
}
