#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: list to be printed
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t counter = 0;
if (h == NULL)
return (counter);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}

