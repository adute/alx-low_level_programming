#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: array that holds the arguments
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc < 2)
	{
		printf("Error\n");
			return (1);
	}
	else if (atoi(*argv) < 0)
	{
		printf("0\n");
	}
	else
	{
		cents = atoi(argv[1]) / 10;
		printf("%d\n", cents);
	}
	return (0);
}
