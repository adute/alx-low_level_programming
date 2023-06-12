#include "main.h"
#include <stdlib.h>
/**
 * create_array -a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the character to be initialized with
 * Return: pointer to the array if yes
 * NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(c) +  size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);

}
