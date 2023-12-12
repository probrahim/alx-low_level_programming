#include "lists.h"

/**
 * insert_nodeint_at_index -function that inserts a new node
 * @idx: index of the list where the new node should be added
 * @head: pointer to the head
 * @n: data to be added
 * Return: address of new node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *base, *file;

	base = (listint_t *)malloc(sizeof(listint_t));

	if (base == NULL)
		return (NULL);

	base->n = n;

	if (idx == 0)
	{
		base->next = *head;
		*head = base;
		return (base);
	}

	file = *head;

	for (i = 0; i < idx - 1 && file != NULL; i++)
		file = file->next;

	if (file == NULL)
	{
		free(base);
		return (NULL);
	}
	base->next = file->next;
	file->next = base;
	return (base);
}
