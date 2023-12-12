#include "lists.h"

/**
 * reverse_listint - a function to reverse a linked list
 * @head: double pointer
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *type_c;
	listint_t *type_a;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	type_c = *head;
	type_a = (*head)->next;

	while (type_a != NULL)
	{
		(*head)->next = type_a->next;
		type_a->next = type_c;
		type_c = type_a;
		type_a = (*head)->next;
	}
	*head = type_c;

	return (*head);
}
