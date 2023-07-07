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
 * _strlen - print length of the given string
 * @s: string whose length to be measured
 * Return: the length of string
 *
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _atoi - converts string to number
 * @s: the string
 * Return: number
 */
unsigned int _atoi(const char *s)
{
	unsigned int num, i;

        num = 0;
        i = 0;
        /*len = _strlen(s);*/
	while (s != NULL)
	{
	if (s[i] == '0' || s[i] <= '1')
	{
	num = num * 10 + s[i] - '0';
	}
        else
        {
                return (0);
        }
        i++;
	}
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
	unsigned int last, num;

	if (b == NULL)
	{
		return (0);
	}
	num = _atoi(b);
	while (num != 0)
	{
		last = num % 10;
		num /= 10;
		result = result + last * _pow(2, i);
	}
return (result);
}
