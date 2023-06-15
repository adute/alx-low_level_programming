#include "main.h"
#include <stdlib.h>
/**
 * array_range -  function that creates an array of integers
 * @min: value
  * @max: value
 * Return: the pointer to the newly created array
 * If min > max, return NUll
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array;

	array = malloc(min * max);

	if (array == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	return (array);
}
