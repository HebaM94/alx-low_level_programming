#include "main.h"
int _strlen_recurssion(char *s);
int check_palindrome(char *s, int i, int length);
/**
* wildcmp - function that that compares two strings
* and returns 1 if the strings can be considered identical, otherwise return 0.
* @s1: string to checked
* @s2: string to be chescked
* Return: 1 (identical) or 0  (otherwise)
*/
int wildcmp(char *s1, char *s2)
{
int w;
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
w = wildcmp(s1, s2 + 1);
return (w);
}
else
{
return (*s2 == '\0');
}
}
else if (*s2 == '*')
{
w = wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
return (w);
}
else if (*s1 == *s2)
{
w = wildcmp(s1 + 1, s2 + 1);
return (w);
}
else
{
return (0);
}
}

