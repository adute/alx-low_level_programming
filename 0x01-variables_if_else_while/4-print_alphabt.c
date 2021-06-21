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

	while (s <= 'z')
	{
		if (s != 'e' && s != 'q')
			s++;
		else
			putchar(s);
			s++;
	}
	putchar('\n');

	return (0);
}
