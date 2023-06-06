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
 * rev_string - riverse a string
 * @s: string to be  reversed.
 *
 */
void rev_string(char *s)
{
	int i, len, j;

	len = _strlen(s);
	i = len - 1;
	j = 0;
	while (i >= 0)
	{
		while(j <= len)
		s[i] = s[j];
		i--;
		j++;
	}
}
