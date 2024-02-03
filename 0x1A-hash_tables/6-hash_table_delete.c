#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: A pointer to a hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head = ht;
hash_node_t *node_ht, *temp;
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
node_ht = ht->array[i];
while (node_ht != NULL)
{
temp = node_ht->next;
free(node_ht->key);
free(node_ht->value);
free(node_ht);
node_ht = temp;
}
}
}
free(head->array);
free(head);
}
