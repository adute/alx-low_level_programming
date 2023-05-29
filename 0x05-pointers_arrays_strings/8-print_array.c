#include <stdio.h>

/**
 * print_array - prints n element of arrays
 * @a: array
 * @n: number of elements of the array
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%p, ", *(a + i));
		i++;
	}
	printf("\n");
}
