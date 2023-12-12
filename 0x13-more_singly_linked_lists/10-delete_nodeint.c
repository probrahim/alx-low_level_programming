#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at index
 * @index: index of the node to be deleted
 * @head: pointer to the head
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *base, *dey;

	if (head == NULL || *head == NULL)
		return (-1);
	base = *head;
	if (index == 0)
	{
		*head = base->next;
		free(base);
		return (1);
	}
	dey = base;
	base = base->next;
	for (i = 1; i < index; i++)
	{
		if (base == NULL)
			return (-1);
		dey = base;
		base = base->next;
	}
	dey->next = base->next;
	free(base);
	return (1);
}
