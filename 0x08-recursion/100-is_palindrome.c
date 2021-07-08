#include "holberton.h"
/**
 * is_palindrome - checkes palindrom
 * @s: string
 *
 * Return: 1 if yes
 * 0: if not
 */
int is_palindrome(char *s)
{
	if (s == '\0' || s == s + 1)
		is_palindrome(s + 1);
		return (1);
	else
		return (0);
}
