#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - function that returns the number of elements
* in a linked list_t list
* @h: pointer to the list to be checked
* Return: the number of elements
*/
size_t list_len(const list_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}

