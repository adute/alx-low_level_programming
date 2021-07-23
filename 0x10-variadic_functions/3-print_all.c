#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arg
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	char *str;
	double f;
	int i;
	va_list arg;

	va_start(arg, format);

	while (format)
	{
		i = va_arg(arg, int);
			printf("%d\n", i);
		f = va_arg(arg, double);
		printf("%2f\n", f);
		str = va_arg(arg, char *);
		printf("%s\n", str);
		if (str == NULL)
			printf("nil");
	}

	va_end(arg);
}
