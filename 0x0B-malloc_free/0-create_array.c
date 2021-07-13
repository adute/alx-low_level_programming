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
	
	p = (char *)malloc(size);
	if (size == 0 || c == '\0')
	{
		return ('\0');
	}
	else
		*p = c;
	return (p);
}
