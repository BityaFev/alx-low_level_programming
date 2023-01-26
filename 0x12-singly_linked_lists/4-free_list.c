#include "lists.h"
#include <stdlib.h>
/**
 * free  -list - frees a t list
 * @head: pointer to the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
