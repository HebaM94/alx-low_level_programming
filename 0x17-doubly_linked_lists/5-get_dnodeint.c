#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *get_dnodeint_at_index - function that that returns the nth node
 * of a dlistint_t linked list
 * @head: head of the list
 * @index: the index of the node, starting from 0
 * Return: node does not exist, return NULL or nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int idx = 0;
dlistint_t *current = head;
if (head == NULL)
return (NULL);
while (head->prev != NULL)
head = head->prev;
while (current != NULL)
{
if (idx == index)
return (current);
idx++;
current = current->next;
}
return (NULL);
}

