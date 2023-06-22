#include <stdarg.h>
/**
 * sum_them_all - add all given arguments
 * @n: number of elements to be added
 * Return: sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	return (sum);
}
