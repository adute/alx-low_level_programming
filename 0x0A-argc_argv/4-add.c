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
	int sum, i;
	char c = **argv;

	if (argc <= 1)
	{
		printf("0\n");
	}
	if (isdigit(c))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for(i = 0; i < argc; i++)
		{
		sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
