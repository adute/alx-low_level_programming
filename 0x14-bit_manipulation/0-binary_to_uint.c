#include "main.h"
#include <stdlib.h>
/** binary_to_uint - converts binary to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted num
 * 0: if for strings different from 1 & 0
 * and if b is null
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int uint = 0, i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] == '0' || b[i] == '1')
	{
		uint <<= 1;
		uint += b[i] - '0';
		i++;
	}
		return (uint);
}
