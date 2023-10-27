#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
* @s: string to be checked
* @accept: bytes to be compared to the initial segment of s
* Return: n
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
n++;
break;
}
else if (accept[i + 1] == '\0')
{
return (n);
}
}
s++;
}
return (n);
}

