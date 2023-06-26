#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 * c - for char, i - integer, f - float, s - char *
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	va_start(ap, format);

	if(format == 'c')
		printf("%c", va_arg(ap, char));

	


printf("\n");
}
