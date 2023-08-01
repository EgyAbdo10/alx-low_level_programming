#include "lists.h"
/**
 * add_nodeint_end - print all elements
 * @head: a pointer to the head pointer
 * @n: the new added number
 * Return: a new pointer head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
listint_t *new_head = *head;
ptr->n = n;
ptr->next = NULL;
while (new_head->next != NULL)
{
new_head =new_head->next;
}
new_head->next = ptr;
return (new_head);
}
