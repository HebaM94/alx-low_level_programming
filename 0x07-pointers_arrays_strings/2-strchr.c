#include "main.h"
/**
* *_strchr - function that locates a character in a string
* @s: string to be checked
* @c: character we are looking for
* Return: &s[i] or NULL (not found)
*/
char *_strchr(char *s, char c)
{
int i = 0;
if (s[i] != '\0')
{
for (; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
}
return (0);
}

