#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers followed by new line
 * @separator: is the string to be printed between numbers
 * @n: number of intigers passed to the function
 * allowed to use printf
 * if separator == NULL donot print it
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (separator == NULL)
	{
		return;
	}
	va_start(ap, n);
	while (i < n)
	{
	printf("%d", va_arg(ap, int));
	if (i < n - 1)
	printf("%s", separator);
	i++;
	}
	printf("\n");

	va_end(ap);
}
