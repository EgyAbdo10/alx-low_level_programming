#include "hash_tables.h"
/**
 * hash_table_get - look up a value
 * @ht: the hash table
 * @key: the key to the node
 * Return: the value associated to the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *tmp;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
return ((char *)tmp->value);
tmp = tmp->next;
}
return (NULL);    
}

