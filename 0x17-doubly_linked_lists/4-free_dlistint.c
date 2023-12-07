# include "lists.h"

/**
* free_dlistint - a function that frees a dlintint
* @ head: double pointer to list 1st node
* Return: 0
*/

void free_dlistint(dlistint_t * head)
{
    dlistint_t * temp

    while (head != NULL)
    {
        temp = head -> next
        free(head)
        head = temp
    }
}
