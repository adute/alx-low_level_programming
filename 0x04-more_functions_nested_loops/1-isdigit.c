#include "main.h"

/**
 * _isdigit - function checks number 0 to 9
 * @c: number to be checked
 * Return: 1 for yes else 0
 *
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
