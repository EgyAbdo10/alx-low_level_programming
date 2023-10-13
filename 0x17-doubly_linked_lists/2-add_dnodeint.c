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
 * add_dnodeint - add node to the beginning
 * @head: head
 * @n: the int inside the node
 * Return: a pointer to the newly created element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *ptr = *head;
if (*head == NULL)
{
*head = add_empty(*head, n);
return (*head);
}
ptr = malloc(sizeof(dlistint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = *head;
ptr->prev = NULL;
(*head)->prev = ptr;
*head = ptr;
return (*head);
}
