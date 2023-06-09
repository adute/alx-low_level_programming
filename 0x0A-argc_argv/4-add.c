#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name followed by new line
 * @argc: argumrnt count
 * @argv: argumrnt vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc > 1)
	{
	while (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	}
	else
	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	exit(EXIT_SUCCESS);
}
