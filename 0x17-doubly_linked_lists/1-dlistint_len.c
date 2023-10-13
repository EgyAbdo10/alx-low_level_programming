#include "lists.h"
/**
 * dlistint_len - print all elements
 * @h: head
 * Return: number of eleemnts
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t co = 0;
while (h != NULL)
{
co++;
h = h->next;
}
return (co);
}
