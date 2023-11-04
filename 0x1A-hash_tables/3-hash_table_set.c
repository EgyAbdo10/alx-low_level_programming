#include "hash_tables.h"
/**
 * hash_table_set - insert a node into a hash table
 * @ht: a pointer to the hash table
 * @key: the key of the node
 * @value: the value of the node
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
int index = key_index((const unsigned char *)key, ht->size);
char *new_key;
char *new_value;
hash_node_t *new = malloc(sizeof(hash_node_t)), *tmp;
if (new == NULL)
return (0);
tmp = ht->array[index];
new_key = strdup(key);
new_value = strdup(value);
if (new_key == NULL || *new_key == '\0')
return (0);
new->key = new_key;
new->value = new_value;
new->next = (ht->array[index]);
ht->array[index] = new;
return (1);
}
