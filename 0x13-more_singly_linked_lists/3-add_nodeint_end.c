#include <stdio.h>
#include "lists.h"
/**
* *add_nodeint_end - function that adds a new node
* at the end of a listint_t list
* @head: pointer to the first node
* @n: number to be added in the new node
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newn;
listint_t *temp = *head;
newn = malloc(sizeof(listint_t));
if (!newn)
{
return (NULL);
}
newn->n = n;
newn->next = NULL;
if (*head == NULL)
{
*head = newn;
return (newn);
}
while (temp->next)
{
temp = temp->next;
}
temp->next = newn;
return (newn);
}

