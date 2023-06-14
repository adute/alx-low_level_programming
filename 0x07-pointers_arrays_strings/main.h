#ifndef MAIN_H
#define MAIN_H
/*
 * _memset - fills memory with a constant byte.
 * @s - pointer holding char
 * @b - constant byte
 * @n: number of bytes
 * Return - s
 *
 * _memcpy -  copies memory area.
 * @dest: destination 
 * @src: source
 *
 * _strchr -  locates a character in a string
 * @c: character to be searched
 * _strstr -  locates a substring in a string
 * @haystack: character to be searched
 * @needle: character to be searched
 *
 * set_string - sets the value of a pointer to a char
 * @to: char to be seted
 */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
#endif
