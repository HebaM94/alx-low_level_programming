#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dlistint - function that frees dlistint_t list
* @head: head of the list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
}
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}

