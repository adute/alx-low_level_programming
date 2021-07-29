#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of list_t
 * @h: header of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *t = h;
int cnt = 0;
while (t != NULL)
{
	if (t->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d]%s\n", t->len, t->str);
	cnt++;
	t = t->next;
}
return (cnt);
}
