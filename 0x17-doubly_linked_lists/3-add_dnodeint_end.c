#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *pose, *last;

	pose = malloc(sizeof(dlistint_t));
	if (pose == NULL)
		return (NULL);

	pose->n = n;
	pose->next = NULL;

	if (*head == NULL)
	{
		pose->prev = NULL;
		*head = pose;
		return (pose);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = pose;
	pose->prev = last;

	return (pose);
}
