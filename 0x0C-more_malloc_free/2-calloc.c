#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: bytes
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	ptr =(char *) malloc(nmemb * sizeof(size));
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		ptr[i] = 0;
	return (ptr);
}
