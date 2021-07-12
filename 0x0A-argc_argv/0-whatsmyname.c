#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name and new line
 * @argc: argument count
 * @argv: array that holds the arguments
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	argv[argc] = NULL;

	printf("%s \n", argv[0]);
	EXIT_SUCCESS;
}


