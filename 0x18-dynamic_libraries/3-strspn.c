#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: checking byte
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	int y;

	while (s[i] != '\0')
	{
		y = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				y = 1;
		}
		j = 0;
		i++;
		if (y == 0)
			break;
	}
	return (i);
}
