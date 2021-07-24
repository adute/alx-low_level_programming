#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator -executes a function given as a param on each array
 * @array: array
 * @size: size
 * @action: function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
