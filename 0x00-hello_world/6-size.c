#include <stdio.h>
/**
 * main - entry point
 *
 * return: always 0 (success)
 *
 */
int main(void)
{
	char charType;
	int intType;
	long int lIntType;
	long long int llIntType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(lIntType));
	printf("Size of a long long int: %zu bytes\n", sizeof(llIntType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);
}
