#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function concatinates 1 2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: con
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int l1 = sizeof(s1);
	unsigned int l2 = sizeof(s2);

	con = (char *)malloc(l1 + l2 + 1);
	if (con == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			*con = *s1;
			s1++;
			con++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			*con = *s2;
			s2++;
			con++;
		}
	}
	con -= l1 + l2;
	return (con);
}
