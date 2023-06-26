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
	int num;

	va_start(ap, n);
	while (i < n)
	{
		num = va_arg(ap, int);
			printf("%d", num);
	if (i < n - 1 && separator != NULL)
	printf("%s", separator);
	i++;
	}
	printf("\n");

	va_end(ap);
}
