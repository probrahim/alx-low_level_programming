#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to head
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *base;
	int i;

	base = *head;

	if (*head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	(*head) = (*head)->next;
	free(base);

	return (i);
}
