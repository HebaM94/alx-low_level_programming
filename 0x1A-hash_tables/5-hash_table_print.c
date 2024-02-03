#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: A pointer to the hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node_ht;
unsigned long int i, comma = 0;
if (ht == NULL)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
node_ht = ht->array[i];
while (node_ht != NULL)
{
if (comma == 1)
printf(", ");
printf("'%s': '%s'", node_ht->key, node_ht->value);
node_ht = node_ht->next;
comma = 1;
}
}
}
printf("}\n");
}
