#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * *jump_list - function that searches for a value in a sorted
 * list of integers using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located or
 * NULL if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump, prev, next;
listint_t *current;
if (list == NULL || size == 0)
return (NULL);
jump = sqrt(size);
prev = 0;
next = jump;
while (next < size && list[next].n < value)
{
printf("Value checked at index [%lu] = [%d]\n", next, list[next].n);
prev = next;
next += jump;
}
printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
current = &list[prev];
while (current != NULL && current->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
current = current->next;
}
if (current != NULL && current->n == value)
return (current);
return (NULL);
}
