# include "lists.h"
# include <stdlib.h>
/**
* add_dnodeint_end - adds a node to end of the list
* @ head: double pointer to nodes
* @ n: data to fill new node
*
* Return: new node on success, NULL on failure
*/

dlistint_t * add_dnodeint_end(dlistint_t ** head, const int n)
{
    dlistint_t * new, *tmp

    if (head == NULL)
    return (NULL)
    new = malloc(sizeof(dlistint_t))
    if (new == NULL)
    return (NULL)
    new -> n = n
    new -> next = NULL
    if (*head == NULL)
    {
        new -> prev = NULL
        * head = new
        return (new)
    }
    tmp = *head
    while (tmp -> next != NULL)
    tmp = tmp -> next
    tmp -> next = new
    new -> prev = tmp
    return (new)
}
