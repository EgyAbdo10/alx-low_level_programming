#include "lists.h"
unsigned int get_dll_len(dlistint_t *head)
{
unsigned int i = 0;
dlistint_t *ptr = head;
while ((ptr) != NULL)
{
i++;
ptr = ptr->next;
}
return (i);
}
/**
 * get_dnodeint_at_index - get node at index
 * @head: the head pointer
 * @index: the index of the node starting from zero
 * Return a pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
if (get_dll_len(head) <= index)
return (NULL);
while (i < index)
{
head = head->next;
i++;
}
return (head);
}
