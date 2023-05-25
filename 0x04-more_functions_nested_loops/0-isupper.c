#include "main.h"

/**
 * _isupper - function checks for upper case
 * @c: character to be checked
 *
 * Return: 1 if Yes and 0 if no
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
