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
	char num;
	char CH = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	while (CH < 'g')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
