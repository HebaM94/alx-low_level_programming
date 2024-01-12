#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list
 * @head: head of the list
 * Return: sum of all the data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
unsigned int counter = 0;
if (head == NULL)
return (counter);
else
{
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
counter += head->n;
head = head->next;
}
}
return (counter);
}

