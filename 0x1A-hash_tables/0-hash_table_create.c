#include "hash_tables.h"
#include <stdlib.h>
/**
 * *hash_table_create - function that creates a hash table
 * @size: Thte size of the array
 * Return: pointer to the newly created hast table or
 * NULL If something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
unsigned long int i;
ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
{
free(ht);
return (NULL);
}
ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
{
free(ht);
return (NULL);
}
for (i = 0; i < size; i++)
ht->array[i] = NULL;
return (ht);
}
