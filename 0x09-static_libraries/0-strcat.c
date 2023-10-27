#include "main.h"
/**
* *_strcat - function that concatenates two strings.
* @dest: The string to be concatenated.
* @src: The string to be concatenated
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
