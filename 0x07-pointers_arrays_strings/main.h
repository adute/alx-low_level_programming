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
 */
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);

#endif
