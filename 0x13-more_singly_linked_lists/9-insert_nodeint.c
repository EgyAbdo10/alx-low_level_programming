#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a certain index
 * @head: the address of tye pointer head
 * @idx: the index for insertion
 * @n: the data in the new inserted node
 * Return: a pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *ptr = *head;
listint_t *new_node_ptr = malloc(sizeof(listint_t));
if (new_node_ptr == NULL)
return (NULL);
new_node_ptr->n = n;
new_node_ptr->next = NULL;
if (idx == 0 || (*head == NULL && idx == 0))
{
new_node_ptr->next = *head;
*head = new_node_ptr;
}
else
{
while (ptr != NULL && i < idx - 1)
{
ptr = ptr->next;
i++;
}
new_node_ptr->next = ptr->next;
ptr->next = new_node_ptr;
}
return (new_node_ptr);
}
