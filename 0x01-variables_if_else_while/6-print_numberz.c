#include <stdio.h>
/**
 * main - entry pont
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int single = 0;

	while (single < 10)
	{
		putchar(single);
		single++;
	}
	putchar('\n');

	return (0);

}
