#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: header of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return NULL;

	while (head != NULL)
	{
		tmp = head->next;
		 free(tmp);
		 head = tmp;
		 free(head);
	}
}
