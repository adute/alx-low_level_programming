
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - add new node at the begining of  a linked list
 * @head: header of the list
 * @n: intiger
 *
 * Return: address of new element if ok
 * NULL: ifnot
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tmp;
	const int n1 = n;

	if (head)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n1;
		newNode->next = NULL;

		if (*head == NULL)
		{
			*head = newNode;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = newNode;
			return (tmp);
		}
	}
	return (NULL);
}
