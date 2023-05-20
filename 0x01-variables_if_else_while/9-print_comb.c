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
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		while (m <= 9)
		{
			putchar('0' + n);
			putchar('0' + m);
			putchar(',');
			m++;
		}
	}
	putchar('\n');

	return (0);
}
