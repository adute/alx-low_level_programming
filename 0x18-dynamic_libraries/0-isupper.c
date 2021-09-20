#include "main.h"

/**
 * _isupper - checks for upper case character
 *
 * @c: variable to be checked
 *
 * Return: 1 for upper case
 * 0: if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
