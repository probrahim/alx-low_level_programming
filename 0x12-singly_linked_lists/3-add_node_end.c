#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *last;
    size_t deplus = 0;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);
    while(str[deplus])
        deplus++;
    new->len = deplus;
    new->str = strdup(str);
    if (*head == NULL)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        new->next = NULL;
        last = *head;
        while (last->next)
            last = last->next;
        last->next = new;
    }
    return (new);
}
