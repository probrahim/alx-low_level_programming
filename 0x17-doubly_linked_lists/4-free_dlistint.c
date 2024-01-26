#include "lists.h"

/**
 * free_dlistint - Frees.
 * @head: The head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *util;

	while (head)
	{
		util = head->next;
		free(head);
		head = util;
	}
}
