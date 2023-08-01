#include "lists.h"
/**
 * pop_listint - print all elements
 * @head: a pointer to the head pointer
 */
int pop_listint(listint_t **head)
{
int i;
if (*head == NULL)
return (0);
*head = (*head)->next;
i = (*head)->n;
free(head);
return(i);
}
