#include "main.h"
/**
 * _abs - calculates absolute value of a num
 * @num: number to be checked
 * Return: absolute value
 */

int _abs(int num)
{
	int n;

	if (num < 0)
	{
	n = num * -1;
	return (n);
	}
	else
	if (num > 0)
	{
	return (num);
	}
	else
		return (0);
}
