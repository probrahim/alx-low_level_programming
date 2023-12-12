#include "lists.h"

/**
 * sum_listint - returns sum of all the data(n)
 * @head: pointer to head
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *base;
	int deplus = 0;

	base = head;

	while (base != NULL)
	{
		deplus = deplus + base->n;
		base = base->next;
	}
	return (deplus);
}
