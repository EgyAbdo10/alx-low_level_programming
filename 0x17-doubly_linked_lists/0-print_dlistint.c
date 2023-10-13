#include "lists.h"
/**
 * print_dlistint - print all elements
 * @h: head
 * Return: number of eleemnts
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t co = 0;
while (h != NULL)
{
printf("%d\n", h->n);
co++;
h = h->next;
}
return (co);
}
