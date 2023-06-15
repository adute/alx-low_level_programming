#include "main.h"

/**
 * _isalpha- function checks alphabets
 * @c: character to be checked
 * Return: 1 if Yes 0 otherwise
 *
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
