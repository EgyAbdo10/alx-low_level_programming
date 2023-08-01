#include "lists.h"
/**
 * pop_listint - print all elements
 * @head: a pointer to the head pointer
 * Return: the data of the first node
 */
int pop_listint(listint_t **head)
{
int i;
listint_t *ptr = *head;
if ((*head) == NULL)
return (0);
*head = (*head)->next;
i = ptr->n;
free(ptr);
return (i);
}
