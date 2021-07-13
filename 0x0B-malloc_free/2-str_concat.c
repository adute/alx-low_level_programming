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
	char  *r;
	char *t;
	char *con;

	con = q = malloc(sizeof(a) + sizeof(b) + 1);
	for (r = s1; (*r = *t) != '\0'; ++r)
	{
		++t;
	}
	for (r = s2; (*r = *t) != '\0'; ++r)
	{
		++t;
	}
	return (con);
}
