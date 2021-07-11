#include "holberton.h"

/**
 * _strpbrk - function that gets the length of a prefix substring
   * @s: string
   * @accept: checking byte
   *
   * Return:  accept that matches s
   */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			j++;
		}
		i++;
	}

	if (s[i] == '\0' || accept[j] == '\0')
		return ('\0');
}
