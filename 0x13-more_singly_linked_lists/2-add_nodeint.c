#include"lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds new node at the begining
 * @head: head node
 * @n: integer to be added
 * Return: address of the new element on success
 * or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
	{
	return (NULL);
	}
	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);

}
