#include "main.h"
#include <stdlib.h>
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
 * str_concat -a function that concatenates two strings.
 * @s1: receiver/base string
 * @s2: string to be concaienated
 * Return: s1 followed by s2 on SUCCESS
 * NULL  if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len = 0;
	int i, j = 0;

	if (s2 == NULL && s1 == NULL)
	{
		return (NULL);
	}

	len = _strlen(s1) + _strlen(s2);
	p = malloc(len * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < _strlen(s1))
	{
		p = s1;
		i++;
	 }
	j = i;
	while (j < len)
	{
		p = s2;
		j++;
	}

	return (p);

}
