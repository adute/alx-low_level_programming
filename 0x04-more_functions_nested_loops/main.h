#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - function checks for upper case
 * _isdigit - function checks digit (0-9)
 * @c: character to be checked
 * Return: 1 if yes / 0
 *
 * mul - function that multiplies two numbers
 * @a: number 1
 * @b: multiple 2
 * Return: multiple of a and b
 *
 * _putchar - writes character to stdout
 * print_numbers - prints 0 to 9
 * print_most_numbers - print 0 to 9 except 2 and 4
 * more_numbers - prints 0-14, 10X
 *
 */
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
int _putchar(char c);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
#endif
