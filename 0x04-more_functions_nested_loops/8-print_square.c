#include "main.h"

/**
 * print_square - prints square followed by new line
 * using only _putchar
 * @size: size of square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */
void print_square(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	{
	while (i < size)
	{
	j = 0;
	while (j < size)
	{
	_putchar('#');
	j++;
	}
	_putchar('\n');
	i++;
	}
	}
	else
	{
	_putchar('\n');
	}
}
