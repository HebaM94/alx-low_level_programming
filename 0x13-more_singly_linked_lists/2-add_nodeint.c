#include <stdio.h>
#include "lists.h"
/**
* *add_nodeint - function that adds a new node
* at the beginning of a listint_t list
* @head: pointer to the first node
* @n: number to be added in the new node
* Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newn;
newn = malloc(sizeof(listint_t));
if (!newn)
{
return (NULL);
}
newn->n = n;
newn->next = *head;
*head = newn;
return (newn);
}

