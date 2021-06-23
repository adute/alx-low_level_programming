#include "holberton.h"
/**
 * _abs - function computes absolute value
 * @n: for intigers
 *
 * Return: absolte value
 */
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	else
		n = n;
	return n;
}
