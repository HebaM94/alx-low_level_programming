#include <stdio.h>
#include "lists.h"
/**
* sum_listint - function that  returns the sum
* of all the data (n) of a listint_t linked list.
* @head: list to be checked
* Return: sum or 0 (if list is empty)
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

