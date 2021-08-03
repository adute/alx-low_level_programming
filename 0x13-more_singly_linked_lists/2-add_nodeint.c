#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint - add new node at the begining of  a linked list
 * @head: header of the list
 * @n: intiger
 *
 * Return: address of new element if ok
 * NULL: ifnot
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	const int n1 = n;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || !n)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n1;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
