#include "main.h"
/**
 * clear_bit - sets value of bit to 0 at index
 * @n: binary num
 * @index: index
 *
 * Return: 1 on success
 * -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	bit = n && (~(1 << index));
	if (bit)
		return (1);
	else
		return (-1);

}
