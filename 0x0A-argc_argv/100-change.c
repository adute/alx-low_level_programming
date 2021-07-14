#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: array that holds the arguments
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int cents, i = 0;
	int ch[5] = {25, 10, 5, 2, 1};
	int change = atoi(argv[1]);

	if (argc == 2)
	{
		while (i < 5)	
		{
			cents = change / ch[i];
			if (change % ch[i] == 0)
			{
				printf("%d\n", cents);
				break;
			}
			else
			{
				i++;
			}
		}
	}
	else if (change < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
