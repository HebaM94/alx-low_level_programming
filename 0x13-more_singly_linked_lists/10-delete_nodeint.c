#include <stdio.h>
#include "lists.h"
/**
* delete_nodeint_at_index - function that deletes the node
* at index index of a listint_t linked list.
* @head: list to be checked
* @index: index of the node that will be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
for (i = 0; i < (index - 1); i++)
{
if (!temp || !(temp->next))
{
return (-1);
}
temp = temp->next;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}

