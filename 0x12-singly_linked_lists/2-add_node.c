#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
int len = 0;
list_t *ptr = malloc(sizeof(list_t));
while (str[len] != '\0')
len++;
if (ptr == NULL)
return NULL;
ptr->next = *head;
ptr->str = strdup(str);
ptr->len = len;
*head = ptr;
return (*head);
}
