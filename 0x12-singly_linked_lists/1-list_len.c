#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - get length
 * @h: the head
 * Return: the lenght of elements
 */
size_t list_len(const list_t *h)
{
unsigned long int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
