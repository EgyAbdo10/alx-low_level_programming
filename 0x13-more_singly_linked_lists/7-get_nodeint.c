#include "lists.h"
/**
 * get_nodeint_at_index - point to the node of index
 * @head: the head pointer
 * @index: the index of the wanted node
 * Return: A pointer to the node of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *ptr = head;
unsigned int count, i = 0;
while (ptr)
{
count++;
ptr = ptr->next;
}
if (index >= count)
return (NULL);
ptr = head;
while (i < index)
{
ptr = ptr->next;
i++;
}
return (ptr ? ptr : NULL);
}
