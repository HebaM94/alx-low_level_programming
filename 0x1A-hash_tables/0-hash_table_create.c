#include "hash_tables.h"
/**
 * *hash_table_create - function that creates a hash table
 * @size: Thte size of the array
 * Return: pointer to the newly created hast table or NULL (error)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *hasht = malloc(sizeof(hash_table_t));
if (hasht == NULL)
return (NULL);
hasht->size = size;
hasht->array = malloc(sizeof(hash_node_t *) * size);
if (hasht->array == NULL)
{
free(hasht);
return (NULL);
}
for (i = 0; i < size; i++)
hasht->array[i] = NULL;
return (hasht);
}
