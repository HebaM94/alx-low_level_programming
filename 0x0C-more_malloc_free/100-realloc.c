#include <stdlib.h>
#include "main.h"
/**
* *_realloc - function that reallocates a memory block using malloc and free.
* @ptr: pointer to the memory previously allocated .
* @old_size: the size, in bytes, of the allocated space for ptr.
* @new_size: the new size, in bytes of the new memory block.
* Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *m;
char *oldm = ptr;
unsigned int i, n;
n = new_size;

if (ptr == NULL)
{
m = malloc(new_size);
return (m);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
{
return (ptr);
}
m = malloc(new_size);
if (m == NULL)
return (NULL);
if (new_size > old_size)
n = old_size;
for (i = 0; i < n; i++)
m[i] = oldm[i];
free(ptr);
return (m);
}

