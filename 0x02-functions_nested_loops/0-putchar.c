#include "main.h"

/**
 * main - print a word
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[7] = '_putchar';
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
		_putchar('\n');
	return (0);
}
