#include "lists.h"
/**
 * add_nodeint - print all elements
 * @head: a pointer to the head pointer
 * @n: the new added number
 * Return: a new pointer head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
if (*head == NULL || ptr == NULL)
return NULL;
ptr->next = *head;
ptr->n = n;
*head = ptr;
return (*head);
}
