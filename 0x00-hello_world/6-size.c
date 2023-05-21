#include <stdio.h>
/*
 * main - function
 * that prints size of data types
 * Return : 0
 */

int main(void)
{
	printf("size of char: %d", sizeof(char));
	printf("size of int: %d", sizeof(int));
	printf("size of long int: %d", sizeof(long int));
	printf("size of long long int: %d", sizeof(long long int));
	printf("size of float: %d", sizeof(float));
	return (0);
}
