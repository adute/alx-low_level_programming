#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
