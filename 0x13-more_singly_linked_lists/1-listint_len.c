#include <stddef.h>
#include "lists.h"

/**
 * listint_len - gives the number of elements in a linked list
 * @h: header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *t = h;
	size_t len = 0;

	while (t != NULL)
	{
		len++;
		t = t->next;
	}
	return (len);
}
