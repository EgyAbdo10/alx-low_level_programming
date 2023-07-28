#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - add a node in the beginning
 * @head: the head ptr
 * @str: the string
 * Return: the ptr
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *ptr = *head;
list_t *new_ptr = malloc(sizeof(list_t));
if (new_ptr == NULL)
return (NULL);
while (str[len])
len++;
new_ptr->str = strdup(str);
new_ptr->len = len;
new_ptr->next = NULL;
if (*head == NULL)
{
*head = new_ptr;
return (new_ptr);
}
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new_ptr;
return (new_ptr);
}
