#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * use only _putchar
 */

void print_triangle(int size)
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
			_putchar(" #");
			j++;
			}
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
