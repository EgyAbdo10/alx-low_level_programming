#include "hash_tables.h"

/**
 * hash_table_print - print hash tabe keys and values
 * @ht: a pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int printed_first = 0;
hash_node_t *tmp;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < (ht->size); i++)
{
tmp = ht->array[i];

while (tmp != NULL)
{
printf("'%s': '%s'", tmp->key, tmp->value);
printed_first = 1;
if (tmp->next != NULL)
printf(", ");
tmp = tmp->next;
}
if (i != (ht->size) - 1 && printed_first == 1)
{
if (ht->array[i + 1] != NULL)
printf(", ");
}
}
printf("}\n");
}
