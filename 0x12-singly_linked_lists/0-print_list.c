#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print all elements of a list
 * @h: the head
 * Return: the count of elements
*/
size_t print_list(const list_t *h)
{
int count = 0;
const list_t *ptr;
if (h == NULL)
return (-1);
ptr = h;
while (ptr != NULL)
{
count++;
if (ptr->str == NULL)
{
printf("[0] (nil)\n");
}
printf("[%u] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
}
return (count);
}
