#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings followed by new line
 * @separator: is the string to be printed between strings
 * @n: number of strings passed to the function
 * allowed to use printf
 * if separator == NULL donot print it
 * if one of strings == NULL, print (nil)
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
	if (va_arg(ap, char*) == NULL)
	{
		printf("%s", "nil");
	}
	else
	printf("%s", va_arg(ap, char*));
	if (i < n - 1)
	{
		printf("%s", separator);
	}
	i++;
	}
	printf("\n");
}
