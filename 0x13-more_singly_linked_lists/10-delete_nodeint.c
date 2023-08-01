#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a certain index
 * @head: the address of the pointer head
 * @index: the index for deletion
 * Return: (1) on success or (-1) on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *ptr = *head;
listint_t *temp = *head;
if ((*head) == NULL)
return (-1);
if (index == 0)
{
*head = ptr->next;
free(ptr);
return (1);
}
for (i = 0; ptr && i < index; i++)
{
if (i == index - 1)
{
temp = ptr->next;
ptr->next = ptr->next->next;
free(temp);
return (1);
}
else
{
ptr = ptr->next;
temp = ptr;
}
}

return (-1);
}
