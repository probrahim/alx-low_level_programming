#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *util = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (util == NULL)
			return (-1);
		util = util->next;
	}

	if (util == *head)
	{
		*head = util->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		util->prev->next = util->next;
		if (util->next != NULL)
			util->next->prev = util->prev;
	}

	free(util);
	return (1);
}
