#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program prints minimum number of coins to make
 * @argc: argumrnt count
 * @argv: argumrnt vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	int cent[5] = {25, 10, 5, 2, 1};
	int change;
	int i = 0;

	if (argc > 1)
	{
	while (i < 5)
	{
	if (atoi(argv[1]) < cent[i])
		i++;
	else if (atoi(argv[1]) == cent[i])
		change = atoi(argv[1]) / cent[i];
	}
	printf("%d\n", change);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	exit(EXIT_SUCCESS);
}
