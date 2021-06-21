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

	while ((s <= 'z') && (s != 'e' && s != 'q'))
	{
		putchar(s);
		s++;
	}
	putchar('\n');

	return (0);
}
