#include "holberton.h"
/**
 * print_alphabet_x10 - prints abc 10times
 *
 * end with new line
 *
 */
void print_alphabet_x10(void)
{
	char s = 'a';
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (s <= 'z')
		{
		_putchar(s)
		s++;
		}
		_putchar('\n');
	}
}
