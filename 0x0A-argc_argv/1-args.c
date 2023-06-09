#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name followed by new line
 * @argc: argumrnt count
 * @argv: argumrnt vector
 * Return: success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = 0;
	
	while (count <= argc - 1)
	{
		count++;
		
	}
		printf("%d\n", count - 1);
	exit(EXIT_SUCCESS);
}
