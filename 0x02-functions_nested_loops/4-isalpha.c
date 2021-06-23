#include "holberton.h"
/**
 * _isalpha - function that checks alphabets
 * @c: the variable to be checked
 *
 * Return: On success 1
 * if not, 0.
 */
int _isalpha(int c)
{

	if (c >= 'a' &&  c <= 'z') 
	{
		if (c >= 'A' && c <= 'Z')
		return (1);
	}
	else
		return (0);
}
