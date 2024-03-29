#include "lists.h"
/**
 * list_len - finds th number of elements in the list
 * @h: the linked list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
