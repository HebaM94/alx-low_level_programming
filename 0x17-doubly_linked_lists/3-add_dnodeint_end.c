#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 * @head: head of the list
 * @n: new node to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
temp = *head;
if (temp != NULL)
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}
else
*head = new_node;
new_node->prev = temp;
return (new_node);
}

