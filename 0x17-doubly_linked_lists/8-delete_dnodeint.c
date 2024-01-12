#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: head of the list
 * @index: the index of the node that should be deleted.
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (temp != NULL)
{
while (temp->prev != NULL)
temp = temp->prev;
}
while (temp != NULL)
{
if (i == index)
{
if (i == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = temp->prev;
}
else
{
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
}
free(temp);
return (1);
}
i++;
temp = temp->next;
}
return (-1);
}

