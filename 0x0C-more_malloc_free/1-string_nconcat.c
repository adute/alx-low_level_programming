#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: string one
 * @s2: string 2
 * @n: string bytes
 *
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = sizeof(s1);
	unsigned int l2 = sizeof(s2);
	unsigned int i;
	char *ncon;

	ncon = malloc(l1 + n + 1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l2)
		n = l2;
	if (ncon == NULL)
		return (NULL);
	for (i = 0; i < (l1 + n); i++)
		if (i < l1)
			ncon[i] = s1[i];
		else
			ncon[i] = s2[i - l1];
	ncon[i] = '\0';
	return (ncon);


}
