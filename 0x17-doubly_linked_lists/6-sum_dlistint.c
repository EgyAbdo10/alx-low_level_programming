#include "lists.h"
/**
 * sum_dlistint - sum dtaa in nodes
 * @head: the head pointer
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum = head->n + sum;
head = head->next;
}
return (sum);
}
