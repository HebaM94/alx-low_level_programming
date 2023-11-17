#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
* *add_node - function that  adds a new node
* at the beginning of a list_t list
* @head: pointer to a pointer to the head of the linked list
* @str: new string in the new node
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int len = 0;
while (str[len])
{
len++;
}
node = malloc(sizeof(list_t));
if (!node)
return (NULL);
node->str = strdup(str);
node->len = len;
node->next = (*head);
(*head) = node;
return (*head);
}

