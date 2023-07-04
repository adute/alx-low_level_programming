#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free list
 * @head: head
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
	tmp = head;
	head = head->next;
	free(tmp);

	}
}

