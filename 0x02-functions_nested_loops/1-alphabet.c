#include "holberton.h"
/**
 * print_alphabet - prints abc..z
 *
 * end with new line
 *
 */
void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
	}
	_putchar('\n');
}
