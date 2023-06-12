#include "main.h"
#include <stdlib.h>
/**
 * str_concat -a function that concatenates two strings.
 * @s1: receiver/base string
 * @s2: string to be concaienated
 * Return: s1 followed by s2 on SUCCESS
 * NULL  if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j = 0;

	p = malloc(sizeof(s1) * sizeof(s2));

	if ( s2 == NULL && s1 == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{s1[i] = s2[j];
		j++;
		i++;
		}
		i++;
	}
	p =s1;

	return (p);

}
