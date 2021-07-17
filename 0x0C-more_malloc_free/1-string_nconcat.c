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
	unsigned int l1;
	unsigned int i = 0;
	unsigned int j;
	char *ncon;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s != '\0')
		i++;
	l1 = i;
	ncon = malloc(sizeof(char) * (l1 + n + 1));
	if (ncon == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		ncon[i] = s1[i];
	for (j = 0; s2[i] != '\0' && j < n ; i++,j++)
		ncon[i] = s2[j];
	ncon[i] = '\0';
	return (ncon);
}
