#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: head of a lest
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

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
