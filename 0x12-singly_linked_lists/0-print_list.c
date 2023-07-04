#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer
 * Return: the number of nodes
 * if str is NULL, print [0] (nil)
 * allowed to use printf
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	if (h->str == NULL)
	{
	printf("[%d] (nil)\n", 0);
	}
	else
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;

	}
	return (count);

}
