#include "main.h"
/**
* *_strpbrk- function that searches a string for any of a set of bytes
* @s: string to be checked
* @accept: string to be compared to s
* Return: s or ‘\0’ (NULL - no matches)
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (s);
}
}
s++;
}
return ('\0');
}

