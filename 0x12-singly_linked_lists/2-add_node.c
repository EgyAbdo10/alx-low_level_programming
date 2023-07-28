#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - add a node in the beginning
 * @head: the head ptr
 * @str: the string
 * Return: the head
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);
while (str[len])
len++;
ptr->next = (*head);
ptr->str = strdup(str);
ptr->len = len;
*head = ptr;
return (*head);
}
