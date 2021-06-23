#include "holberton.h"
/**
 * main -entry point
 *
 * return: o
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char s = 'a';

	while (s <= 'z')
	{
		_putchar(s);
	}
	_putchar('\n');
}
