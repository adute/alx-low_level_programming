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
	if (argc > 0)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
