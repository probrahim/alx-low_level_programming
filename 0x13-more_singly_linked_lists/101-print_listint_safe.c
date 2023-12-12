#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *base, *alx;
	size_t presque = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	base = head->next;
	alx = (head->next)->next;

	while (alx)
	{
		if (base == alx)
		{
			base = head;
			while (base != alx)
			{
				presque++;
				base = base->next;
				alx = alx->next;
			}

			base = base->next;
			while (base != alx)
			{
				presque++;
				base = base->next;
			}

			return (presque);
		}

		base = base->next;
		alx = (alx->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t presque, index = 0;

	presque = looped_listint_len(head);

	if (presque == 0)
	{
		for (; head != NULL; presque++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < presque; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (presque);
}
