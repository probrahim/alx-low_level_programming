#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
    list_t *png;
    size_t kol;

    png = malloc(sizeof(list_t));
    if (png == NULL)
        return (NULL);

    png->str = strdup(str);

    for(kol = 0; str[kol]; kol++)

    png->len = kol;
    png->next = *head;
    *head = png;

    return(*head);
}
