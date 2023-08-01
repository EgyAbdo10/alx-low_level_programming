#include "lists.h"
/**
 * free_listint - print all elements
 * @head: the head pointer
 */
void free_listint(listint_t *head)
{
listint_t *ptr = head;
while (ptr)
{
ptr = head->next;
free(head);
head = ptr;
}

}
