#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes a charcter to stdout
 * @c: character to be writted
 *
 * _puts_recursion - prints string
 * @s: the string
 *
 * _print_rev_recursion - prints string reversed recursively
 *
 * _strlen_recursion - returns length of string
 *
 * factorial - calculates factotial of a given number
 * @n: number given
 *
 * _pow_recursion - calculates x raised to y
 * @x: the base
 * @y: the exponenet
 */
int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
#endif