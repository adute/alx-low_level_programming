#include "main.h"

/**
 * main - print a word
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[7] = '_putchar';

	for (int i = 0; i < 8; i++)
	{
		_putchar(c[i]);
		_putchar('\n');
	}
	return (0);
}
