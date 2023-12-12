#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *adeb = head;
	listint_t *redmi = head;

	if (!head)
		return (NULL);

	while (adeb && redmi && redmi->next)
	{
		redmi = redmi->next->next;
		adeb = adeb->next;
		if (redmi == adeb)
		{
			adeb = head;
			while (adeb != redmi)
			{
				adeb = adeb->next;
				redmi = redmi->next;
			}
			return (redmi);
		}
	}

	return (NULL);
}
