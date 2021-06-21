#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z' && (s != 'e' && s != 'q'); s++)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
