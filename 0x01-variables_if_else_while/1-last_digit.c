#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{

	int n;
	int  lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if ((n % 10) > 5)
		{
			printf("%sLast digit of%d", n, "%sis and is greater than 5");
		}
		else
		{
			printf("%s Last digit of %d", n, "%s is %s and is 0");
		}
		if (((n % 10) < 6) && ((n % 10) != 0))
		{
			printf("%s last digit of %d", n, "%s is and is less than 6 and not 0");
		}

	return (0);
}
