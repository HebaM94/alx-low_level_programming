#include <stdio.h>
#include "lists.h"
/**
* *insert_nodeint_at_index - function that inserts a new node
* at a given position.
* @head: list to be checked
* @idx: index of the list where the new node should be added
* @n: data within the new node
* Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *newn;
listint_t *temp = *head;
newn = malloc(sizeof(listint_t));
if (!newn || !head)
return (NULL);
newn->n = n;
newn->next = NULL;
if (idx == 0)
{
newn->next = *head;
*head = newn;
return (newn);
}
for (i = 0; temp && i < idx; i++)
{
if (i == (idx - 1))
{
newn->next = temp->next;
temp->next = newn;
return (newn);
}
else
temp = temp->next;
}
return (NULL);
}

