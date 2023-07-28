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
<<<<<<< HEAD
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
=======
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
>>>>>>> 3588cb4d83ba52ad091dd09d68b1d1dbfbdf108a
