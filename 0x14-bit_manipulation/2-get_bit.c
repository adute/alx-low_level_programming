#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: binary num
 * @index: index staring from 0
 *
 * Return: bit at index on success,
 * -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (n != '\0')
		return (bit);
	else
		return (-1);
}
