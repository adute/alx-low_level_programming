#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all of its parameters
 * @n: first param
 * @...: variable pparams
 *
 * Return: sum
 * 0: if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list num;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
