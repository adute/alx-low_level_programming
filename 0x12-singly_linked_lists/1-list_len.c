#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns number of elements of list_t
 * @h: header
 *
 * Return: len
 */
size_t list_len(const list_t *h)
{
	const list_t *t = h;
	int len = 0;
	
	while (t != NULL)
	{
		t = t->next;
		len++;
	}
	return (len);
}
