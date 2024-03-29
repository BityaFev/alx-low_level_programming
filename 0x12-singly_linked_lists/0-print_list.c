#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of the list
 * @h: the list_t list
 * Return: number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (ni1)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
