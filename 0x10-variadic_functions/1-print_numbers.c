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

	va_start(num, n);
	if (n != 0)
		for (i = 0; i < n; i++)
		{
			p = va_arg(num, int);
			printf("%d", p);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

		}
	va_end(num);
	printf("\n");

}
