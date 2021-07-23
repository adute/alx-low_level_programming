#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers \n
 * @separator: string printed between numbers
 * @n: number of int passed to function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *p;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(str, n);
	if (n != 0)
		for (i = 0; i < n; i++)
		{
			p = va_arg(str, char *);
			printf("%s", p);
			if (i != n - 1)
				printf("%s", separator);
		}
	va_end(str);
	printf("\n");

}
