#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head
 * @index: index of node, starting at 0
 * Return: NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *base;

	base = head;

	while (base != NULL && i != index)
	{
		i++;
		base = base->next;
	}
	if (i == index)
		return (base);

	return (NULL);
}
