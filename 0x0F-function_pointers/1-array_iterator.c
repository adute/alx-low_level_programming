#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: given array
 * @size: size off the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || *action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
