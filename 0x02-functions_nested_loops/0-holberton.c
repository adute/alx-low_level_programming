#include "holberton.h"
/**
 *
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char h[] = "Holberton";
	unsigned char i = 0;

	while (i < 9)
	{
		_putchar(h[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
