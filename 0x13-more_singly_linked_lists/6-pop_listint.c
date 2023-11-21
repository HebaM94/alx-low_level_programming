#include <stdio.h>
#include "lists.h"
/**
* pop_listint - function that deletes the head node of a listint_t linked list,
* and returns the head node’s data (n)
* @head: list to be checked
* Return: head node’s data (n) or 0 (empty linked list)
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (!head || !*head)
{
return (0);
}
data = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (data);
}

