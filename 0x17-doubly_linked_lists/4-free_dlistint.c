#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
free(head);
head = temp->next;
}
}
