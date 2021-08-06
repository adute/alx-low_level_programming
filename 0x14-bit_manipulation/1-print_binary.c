#include "main.h"
/**
 * print_binary - function that prints the binary rep.
 * @n: number in binary
 *
 * Return: NOthing
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 10; i > 0; i >>= 1)
	{
		if ((n & i) == 0)
			_putchar('0');
		else
			_putchar('1');
	}

}
