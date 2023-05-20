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
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
