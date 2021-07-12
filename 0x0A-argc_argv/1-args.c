#include <stdio.h>

/**
 * main - program that prints number of arguments passed to it
 * @argc: argument count
 * @argv: array that holds the arguments
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	(void) argv;

	while (count < argc)
	{
		count++;
	}
	printf("%d\n", count - 1);
	return (0);
}
