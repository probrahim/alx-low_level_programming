#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *base;

	while (*head != NULL)
	{
		base = *head;
		*head = (*head)->next;
		free(base);
	}
}
