#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates array of intigers
 * @min: value
 * @max: value
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	ptr = (int *) malloc(sizeof(int) * min * max);
	if (min > max)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= min; i++)
	{
	for (j = 0; j <= max; j++)
		*ptr = 0;
	ptr++;
	}
	return (ptr);
}
