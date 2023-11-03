#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - function that allocates memory using malloc.
* @b: assigned to malloc
* Return: void
*/
void *malloc_checked(unsigned int b)
{
int *i;
i = malloc(b);
if (i == NULL)
{
exit(98);
}
return (i);
}

