#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: given array
 * @size: size off the array
 * @cmp: pointer to function to compare values
 * Return: the index of the first element for which the cmp function
 * doesn't return 0
 * if no element matches: -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0)
		return (1);
	if (array == NULL || cmp == NULL || size == 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);

}
