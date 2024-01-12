#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *insert_dnodeint_at_index - that inserts a new node
 * at a given position
 * @h: the list to be checked
 * @idx: the index of the list where the new node should be added
 * Index starts at 0
 * @n: node to be added
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *temp;
unsigned int index;
new_node = NULL;
if (idx == 0)
new_node = add_dnodeint(h, n);
else
{
temp = *h;
if (temp != NULL)
{
while (temp->prev != NULL)
temp = temp->prev;
}
while (temp != NULL)
{
if (index == idx)
{
if (temp->next == NULL)
new_node = add_dnodeint_end(h, n);
else
{
new_node = malloc(sizeof(dlistint_t));
if (new_node != NULL)
{
new_node->n = n;
new_node->next = temp->next;
new_node->prev = temp;
temp->next->prev = new_node;
temp->next = new_node;
}
}
break;
}
index++;
temp = temp->next;
}
}
return (new_node);
}

