
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check th code for the ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head,"Best");
	add_node_end(&head,"School");
	return (0);
}
