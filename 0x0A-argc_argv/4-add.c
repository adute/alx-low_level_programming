#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: array that holds the arguments
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int sum;
	char c = **argv;

	if (argc <= 1)
	{
		printf("0\n");
	}
	if (!isdigit(c))
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
