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
	int i = 0;
	int j = 0;

	ptr = (int *) malloc(sizeof(int) * min * max);
	while (i < min)
		i++;
	while (j < max)
		ptr[i * max + j] = 0;
	j++;
	return (ptr);
}
