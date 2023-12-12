#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t type_b = 0;
	int type_t;
	listint_t *type_z;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		type_t = *h - (*h)->next;
		if (type_t > 0)
		{
			type_z = (*h)->next;
			free(*h);
			*h = type_z;
			type_b++;
		}
		else
		{
			free(*h);
			*h = NULL;
			type_b++;
			break;
		}
	}

	*h = NULL;

	return (type_b);
}
