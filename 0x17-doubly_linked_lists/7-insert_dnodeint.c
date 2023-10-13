#include "lists.h"

/**
 * get_dll_len - get node at index
 * @head: the head pointer
 * Return: the number of nodes
 */
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
 * insert_dnodeint_at_index - insert node at a certain index
 * @h: the address of the head pointer
 * @idx: the index
 * @n: the dta to be inserted in the new node
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ptr = *h, *new;
unsigned int iter = 0;
if (get_dll_len(*h) >= idx)
{
if (idx == get_dll_len(*h))
add_dnodeint_end(h, n);
else if (idx == 0)
add_dnodeint(h, n);
else
{
while (iter < (idx - 1))
{
ptr = ptr->next;
iter++;
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = ptr;
new->next = ptr->next;
ptr->next = new;
ptr->next->prev = new;
}
}
else
return (NULL);
return (new);
}
