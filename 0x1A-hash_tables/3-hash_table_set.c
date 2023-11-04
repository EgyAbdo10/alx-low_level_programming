#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
int main(void)
{
    // hetairas collides with mentioner
    // heliotropes collides with neurospora
    hash_table_t *ht;
    // hash_node_t tmp;
    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "not cool");
    hash_table_set(ht, "heliotropes", "not so cool");
    printf("%ld----%s\n", key_index((unsigned char *)"hetairas", ht->size), (ht->array[key_index((unsigned char *)"hetairas", ht->size)]->key));
    printf("%ld----%s\n", key_index((unsigned char *)"heliotropes", ht->size), (ht->array[key_index((unsigned char *)"heliotropes", ht->size)]->key));

    return (EXIT_SUCCESS); 
}
