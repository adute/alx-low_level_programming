#include "main.h"

/**
 * _strlen - print length of the given string
 * @s: string whose length to be measured
 * Return: the length of string
 *
 */
int _strlen(char *s)
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
int _atoi(char *s)
{
	int len, num, sign, i;

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
