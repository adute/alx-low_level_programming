#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - gets nth node of listint_t
 * @head: header
 * @idx: index of the node
 * @n: intiger
 * Return: nth node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *newNode;
	int n1 = n;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || !n)
	{
		free(newNode);
		return (NULL);
	}
	if (count == idx)
	{
		newNode->n = n1;
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
			count++;
	return (NULL);
}
