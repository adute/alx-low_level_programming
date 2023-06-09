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
	int count = 0;

	while (count < argc)
	{
		count++;
		printf("%s\n", argv[count - 1]);
	}
	exit(EXIT_SUCCESS);
}
