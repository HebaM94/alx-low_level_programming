#include "hash_tables.h"
/**
 * hash_table_set -  function that adds an element to the hash table
 * @ht: A pointer to hash table to add or update the key/value to
 * @key: The key to add - cannot be an empty string
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *node_ht;
char *value_cp;
unsigned long int index, i;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
value_cp = strdup(value);
if (value_cp == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = value_cp;
return (1);
}
}
node_ht = malloc(sizeof(hash_node_t));
if (node_ht == NULL)
{
free(value_cp);
return (0);
}
node_ht->key = strdup(key);
if (node_ht->key == NULL)
{
free(node_ht);
return (0);
}
node_ht->value = value_cp;
node_ht->next = ht->array[index];
ht->array[index] = node_ht;
return (1);
}
