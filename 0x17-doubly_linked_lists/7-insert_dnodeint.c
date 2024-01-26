#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *util = *h, *pro;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		util = util->next;
		if (util == NULL)
			return (NULL);
	}

	if (util->next == NULL)
		return (add_dnodeint_end(h, n));

	pro = malloc(sizeof(dlistint_t));
	if (pro == NULL)
		return (NULL);

	pro->n = n;
	pro->prev = util;
	pro->next = util->next;
	util->next->prev = pro;
	util->next = pro;

	return (pro);
}
