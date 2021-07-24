#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for intiger
 * @array - array
 * @size: elements of array
 * @cmp: function pointer
 *
 * Return: index
 * -1: if no element matches or size <=0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int index;
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		index = cmp(array[i]);
	if (index == 1)
		return (i);
}
