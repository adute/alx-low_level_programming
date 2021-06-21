#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	char s = 'a';
	char c = 'A';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}

