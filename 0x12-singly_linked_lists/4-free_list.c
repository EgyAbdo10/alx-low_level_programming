#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - add a node in the beginning
 * @head: the head ptr
 * Return: the ptr
 */
void free_list(list_t *head)
{
list_t *ptr = head;
while (head != NULL)
{
ptr = head->next;
free(head->str);
free(head);
head = ptr;
}
}
