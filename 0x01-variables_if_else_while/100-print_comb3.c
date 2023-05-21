#include <stdio.h>

/*
 * main - function
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of
 *  the two digits 0 and 1
 *  Print only the smallest combination of two digits
 *  Numbers should be printed in ascending order, with two digits
 *  You can only use the putchar function
 *  (every other function (printf, puts, etc…) is forbidden)
 *  You can only use putchar five times maximum in your code
 *  You are not allowed to use any variable of type char
 *  All your code should be in the main function
 *  Return : 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
		putchar('0' + n);
		putchar('0' + m);

		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
