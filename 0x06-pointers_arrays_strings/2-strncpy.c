#include "main.h"
/**
* *_strncat - function that copies a string.
* @dest: The string to be copied to.
* @src: The string to be copied
* @n: number of bytes used from src
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

