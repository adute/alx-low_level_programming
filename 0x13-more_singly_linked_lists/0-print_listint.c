#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - function that prints all elements
 * @h: header
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
		printf("%d\n", tmp->n);
		}
		else
		{
			printf("%d\n", tmp->n);
		}
		tmp = tmp->next;
		cnt++;
	}


	return (cnt);
}
