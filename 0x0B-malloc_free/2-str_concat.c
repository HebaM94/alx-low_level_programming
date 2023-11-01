#include <stdlib.h>
#include "main.h"
/**
* *str_concat - function that concatenates two strings.
* @s1: string to be concatenated.
* @s2: string to be concatenated.
* Return: pointer to space in memory of new string, or NULL (failure)
*/
char *str_concat(char *s1, char *s2)
{
char *str;
int i = 0;
int j = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0')
{
j++;
}
str = malloc(sizeof(char) * (i + j + 1));
if (str == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
str[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
str[i] = s2[j];
i++;
}
str[i] = '\0';
return (str);
}

