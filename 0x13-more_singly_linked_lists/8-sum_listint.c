#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - add all the data of the list
 * @head: head node
 * Return: the nth node's data on Success
 * 0 if not
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
		sum += head->n;
		head = head->next;
		}
	}
return (sum);

}
