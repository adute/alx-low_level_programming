#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
 * positive_or_negative - check number if its positive or not
 * @i: number to be checked
 *
 * largest_number - checks for the largest number from the three
 * @a: number to be compared
 * @b: number to be compared
 * @c: number to be compared
 *
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of yea
 */

void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);
#endif /* MAIN_H */
