#include <stdio.h>
/**
 * main - Entry point
 *
 * Printing lowercase alphabets
 *
 * Return: Always 0
 */

int main(void)
{
	char ch;
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	while (CH != 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
