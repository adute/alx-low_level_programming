#include <stdio.h>
#include "holberton.h"

/**
 *main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: array that holds the arguments
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s \n", argv[count]);
	}
	return (0);
}
