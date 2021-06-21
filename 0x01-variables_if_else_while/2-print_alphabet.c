#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{

	char ch = 'a';

	if (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	else
		putchar('\n');

return (0);

}
