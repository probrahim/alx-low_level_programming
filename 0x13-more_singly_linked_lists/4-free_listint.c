#include "lists.h"

/**
 * free_listint - a function that frees the list
 * @head: pointer to head
 * Return: not specified
 */

void free_listint(listint_t *head)
{
	listint_t *base;

	while ((base = head) != NULL)
	{
		base = head->next;
		free(base);
	}
}
