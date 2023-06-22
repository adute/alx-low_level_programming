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
	char *str;

	if (separator == NULL)
	{
		return;
	}
	va_start(ap, n);

	while (i < n)
	{
	str = va_arg(ap, char*);
	printf("%s", str);
	if (i < n - 1)
	{
	printf("%s", separator);
	}
	i++;
	}
	printf("\n");
}
