#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* free_list - function that  frees a list list_t
* at the end of a list_t list
* @head: pointer to the head of the linked list
* Return: void
*/
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}

