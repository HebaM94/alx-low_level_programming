#include "main.h"
/**
* *_strncat - function that concatenates two strings.
* @dest: The string to be concatenated.
* @src: The string to be concatenated
* @n: number of bytes used from src
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
