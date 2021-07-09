#include "holberton.h"
/**
 * _islower - function that checks lower case
 * @c: the character to be checked
 *
 * Return: On success 1
 * if not, 0.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
