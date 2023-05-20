#include <stdio.h>
/**
 * main - Entry point
 *
 * Printing lowercase alphabets in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
