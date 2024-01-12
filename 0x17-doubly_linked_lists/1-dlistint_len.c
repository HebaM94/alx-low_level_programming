#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - function that returns the number of elements
 *  in a linked dlistint_t list
 * @h: list to be checked
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t counter = 0;
if (h == NULL)
return (counter);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
counter++;
h = h->next;
}
return (counter);
}

