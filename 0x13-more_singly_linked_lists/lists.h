#include "lists.h"
/**
 * print_listint - print all elements
 * @h: the head pointer
 * Return: unsigned int with the number of elements
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
