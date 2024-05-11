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
size_t jump, prev, n;
listint_t *current;
if (list == NULL || size == 0)
return (NULL);
jump = (size_t)sqrt((double)size);
prev = 0;
n = 0;
do {
current = list;
n++;
prev = n *jump;
while (list->next && list->index < prev)
list = list->next;
if (list->next == NULL && prev != list->index)
prev = list->index;
printf("Value checked at index [%d] = [%d]\n", (int)prev, list->n);
} while (prev < size && list->next && list->n < value);
printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)current->index, (int)list->index);
for (; current && current->index <= list->index; current = current->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)current->index,
current->n);
if (current->n == value)
return (current);
}
return (NULL);
}
