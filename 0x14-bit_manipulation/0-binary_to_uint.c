#include "main.h"
#include <stdlib.h>

/**
 * _pow - calculate a power to b
 * @a: base
 * @b: exponent
 * Return: p
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int p = 1;
	unsigned int i = 1;

	while (i <= b)
	{
		p = p * a;
	}

	return (p);
}
/**
 * _atoi - converts string to number
 * @s: the string
 * Return: number
 *
unsigned int _atoi(const char *s)
{
        unsigned int len, num, sign, i;

        sign = 1;
        num = 0;
        i = 0;
        len = _strlen(s);

        while (i < len)
        {
        if (s[i] == '-')
        {
                sign = sign * -1;
                i++;
        }
        else
                if (s[i] >= '0' && s[i] <= '9')
        {
                num = num * 10 + s[i] - '0';
        }
        else
        {
                break;
        }
        i++;
        }
        num = num * sign;
        return (num);
}
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary string of 0 and 1 chars
 * Return: converted num
 * 0 if other chars except 1 and 0 in b or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int result = 0;
	unsigned int last;

	if (b == NULL)
	{
		return (0);
	}
	while (b != 0)
	{
		last = b % 10;
		b /= 10;
		result = result + last * _pow(2, i);
	}
return (result);
}
