#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: new node to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
temp = *head;
if (temp != NULL)
{
while (temp->prev != NULL)
temp = temp->prev;
}
new_node->next = temp;
if (temp != NULL)
temp->prev = new_node;
*head = new_node;
return (new_node);
}

