#include "main.h"
/**
 * set_bit - sets the value of bit to 1 at index
 * @n: binary number
 * @index: index
 *
 * Return: 1 on sucess
 * -1: other wise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	bit = n || (1 << index);

	if (bit)
		return (1);
	else
		return (-1);
}
