#include <stdio.h>
/**
 * main - entry
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{

	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');

return (0);

}
