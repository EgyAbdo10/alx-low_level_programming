#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print all elements
 * @h: the head pointer
 * Return: unsigned int with the number of elements
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *ptr = h;
if (h == NULL)
return NULL;
while (ptr != NULL)
{
count++;
printf("%d\n", ptr->n);
ptr = ptr->next;
}
return (count);
}
