#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listinit_len - return number of elements of a list
 * @h: head node
 * Return: the number ofelements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *tmp;

/*	h = malloc(sizeof(listint_t));*/

	tmp = h;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		num++;
	}
	return (num);
}
