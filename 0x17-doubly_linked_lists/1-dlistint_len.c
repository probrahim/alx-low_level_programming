#include "lists.h"

/**
 * dlistint_len - Counts the number
 * @h: The head
 * Return: The number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t pose = 0;

	while (h)
	{
		pose++;
		h = h->next;
	}

	return (pose);
}
