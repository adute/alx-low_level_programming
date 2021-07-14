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
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc >1)
	{
	for (i = 1; i < argc; i++)
	{
	if (isdigit(argv[i]))
	{
		sum += atoi(argv[i]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
	}
	return (0);
}
