#include "lists.h"
/**
 * add_empty - add node to an empty list
 * @head: head
 * @n: the number inside the node
 * Return: a pointer to the newly added node
 */
dlistint_t *add_empty(dlistint_t *head, int n)
{
head = malloc(sizeof(dlistint_t));
if (head == NULL)
return (NULL);
head->n = n;
head->next = NULL;
head->prev = NULL;
return (head);
}

/**
 * add_dnodeint_end - add node to the end
 * @head: head
 * @n: the int inside the node
 * Return: a pointer to the newly created element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *new;
if (*head == NULL)
{
*head = add_empty(*head, n);
return (*head);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
new->prev = temp;
return (new);
}
