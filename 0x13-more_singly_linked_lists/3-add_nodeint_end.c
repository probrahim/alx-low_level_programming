#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: double pointer to the head
 * @n: data in the node to be added
 * Return: address to the new element, NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *base, *px;

	px = *head;

	while (px && px->next != NULL)
		px = px->next;

	base = (listint_t *)malloc(sizeof(listint_t));

	if (base == NULL)
		return (NULL);

	base->n = n;
	base->next = NULL;

	if (px)
		px->next = base;
	else
		*head = base;
	return (base);
}
