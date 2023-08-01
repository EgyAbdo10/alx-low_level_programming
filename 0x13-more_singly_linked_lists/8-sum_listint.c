#include "lists.h"
/**
 * sum_listint - sum all the data points
 * @head: the head pointer
 * Return: the result of the sum
 */
int sum_listint(listint_t *head)
{
int res = 0;
listint_t *ptr = head;
if (head == NULL)
return (0);
while (ptr)
{
res += ptr->n;
ptr = ptr->next;
}
return (res);
}
