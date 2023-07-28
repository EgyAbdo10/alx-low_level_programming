#ifndef list_h
#define list_h
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
=======
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
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
return NULL;
ptr = h;
while (ptr != NULL)
{
count++;
if (ptr->str == NULL)
{
printf("[0] %s\n", ptr->str);
}
printf("[%u] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
}
return (count);
}
>>>>>>> 3588cb4d83ba52ad091dd09d68b1d1dbfbdf108a
