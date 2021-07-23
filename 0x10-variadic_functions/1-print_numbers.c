#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers \n
 * @separator: string printed between numbers
 * @n: number of int passed to function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	int p;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(num, int);
		printf("%d", p);
		if (i != n - 1)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");

}
