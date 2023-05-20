#include <stdio.h>
/**
 * main - Entry point
 *
 * Printing numbers 0 to 9
 *
 * Return: Always 0
 */

int main(void)
{
	char num;

	for (num = '0' ; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
