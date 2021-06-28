#include "holberton.h"

/**
 * swap_int - function that swaps values of two intigers
 * @a: intiger 1
 * @b: intiger 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *s = *a;

	*a = *b;

	*b = *s;


}
