#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - function that prints number of  elements of a list_t list
 * @h: pointer
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
	h = h->next;

	}
	return (count);

}
