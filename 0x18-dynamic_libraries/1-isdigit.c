#include "main.h"

/**
 * _isdigit - checks for digit 0 to 9
 *
 * @c: variable to be checked
 *
 * Return: 1 for digits
 * 0: if not
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

