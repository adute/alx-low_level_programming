#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints character to STdout
 *
 * reset_to_98 - resets integer to 98
 * @n: integer to be reseted
 *
 * swap_int - swaps the value of two integers
 * @a: integer one
 * @b: integer 2
 *
 * _strlen - print length of  the string
 * @s: string whose length to be measured
 *
 * _putchar - writes charcter to stdout
 * @c: char to be printed
 *
 * _puts - prints string
 * @str - string to be printed
 *
 * print_array - prints array
 * @a: array to be printed
 * @n: number of elements of array
 *
 * _strcpy - copies string
 * @dest: destination string
 * @src: source string
 *
 * print_rev - prints string in reverse
 *
 * puts2 - prints every other character of a string
 * rev_string - reverses string 
 * 
 * puts_half - prints half the string
 *
 * _atoi - convert str to int
 */
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
int _putchar(char c);
void _puts(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
void print_rev(char *s);
void puts2(char *str);
void rev_string(char *s);
void puts_half(char *str);
int _atoi(char *s);
#endif /* main.h */
