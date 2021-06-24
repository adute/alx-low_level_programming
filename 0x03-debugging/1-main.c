#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
  int i; /* declaration of variable */

  printf("infinite loop incoming :(\n");

  i=0;/* iitialize valiable */

  while (i < 10)/* condition */
	{
		putchar(i);
	}

	printf("infinite loop avoided!\\o\n");

	return(0);
}
