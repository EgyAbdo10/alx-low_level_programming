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
unsigned long int index = key_index((const unsigned char *)key, ht->size);
char *new_key;
char *new_value;
hash_node_t *new, *tmp, *prev;
if (ht == NULL || key == NULL || *key == NULL || value == NULL)
return (0);
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
tmp = ht->array[index];
prev = NULL;
new_key = strdup(key);
new_value = strdup(value);
if (new_key == NULL || new_value == NULL)
return (0);
while (tmp != NULL)
{
if (strcmp(tmp->key, new_key) == 0)
{
tmp->value = new_value;
free(tmp->value);
return (1);
}
tmp = tmp->next;
}
new->key = new_key;
new->value = new_value;
new->next = (ht->array[index]);
ht->array[index] = new;
return (1);
}
