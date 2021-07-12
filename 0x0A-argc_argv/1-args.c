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

	argv[argc] = NULL;

	while (argc > 1 && argc != count)
	{
		count++;
	}
	printf("%d \n", count);
	return (0);
}
