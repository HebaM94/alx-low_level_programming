#include <stdio.h>
#include "lists.h"
/**
* *get_nodeint_at_index - function that  returns
* the nth node of a listint_t linked list
* @head: list to be checked
* @index: the index of the node, starting at 0
* Return: pointer to the node or NULL (if node doesn't exist)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
for (i = 0; temp && i < index; i++)
{
temp = temp->next;
}
return (temp ? temp : NULL);
}

