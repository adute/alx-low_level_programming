#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all data in listint_t
 * @head: header
 *
 * Return: sum
 * 0: if list empity
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
		return (sum);
	}
	return (0);
}
