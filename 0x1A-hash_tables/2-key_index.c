#include "hash_tables.h"
/**
 * key_index - get the index where a key should be stored
 * @key: the key of a structure
 * @size: the size of the table
 * Return: tyhe index where the node should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = hash_djb2(key) % size;
return (index);
}
