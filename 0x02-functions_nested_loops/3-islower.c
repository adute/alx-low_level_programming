#include "main.h"

/**
 * _islower - function checks lower case
 * Return: 1 if Yes 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
