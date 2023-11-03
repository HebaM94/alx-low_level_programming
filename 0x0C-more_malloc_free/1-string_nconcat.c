#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - function that concatenates two strings.
* @s1: 1st string to be concatenated
* @s2: 2nd string to be concatenated
* @n: number of first bytes of s2 that will be used
* Return: new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, c, e;
if (s1 == 0)
{
i = 0;
}
else
{
i = 0;
while (s1[i])
i++;
}
if (s2 == 0)
{
j = 0;
}
else
{
j = 0;
while (s2[j])
j++;
}
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
{
return (NULL);
}
for (c = 0; c < i; c++)
s[c] = s1[c];
for (e = 0; e < j; e++)
{
s[c] = s2[e];
c++;
}
s[c] = '\0';
return (s);
}

