#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value
 * associated with a key
 * @ht: A pointer to the hash table
 * @key: The key to get the value of
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node_ht;
unsigned long int index;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
if (index >= ht->size)
return (NULL);
node_ht = ht->array[index];
while (node_ht)
{
if (strcmp(key, node_ht->key) == 0)
return (node_ht->value);
node_ht = node_ht->next;
}
return (NULL);
}
