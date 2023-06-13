#include "main.h"
/**
 * alloc_grid -a function that returns a pointer 
 * to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * @width: width of array
 * @height: height of the array
 * Return: pointer of the 2D array
 * NULL on failer or width and height <= 0 
 */
int **alloc_grid(int width, int height)
{
	int *p;

	if (width <= 0 || height <= 0)
	{
	return(NULL);
	}

	p = malloc((width * height) * sizeof(int));
}
