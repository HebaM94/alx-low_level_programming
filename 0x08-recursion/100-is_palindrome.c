#include "main.h"
int _strlen_recurssion(char *s);
int check_palindrome(char *s, int i, int length);
/**
* is_palindrome - function that returns 1 f a string is a palindrome
* and 0 if not
* @s: string to checked
* Return: 1 (palindrome) or 0  (otherwise)
*/
int is_palindrome(char *s)
{
int p;
if (*s == 0)
{
return (1);
}
else
{
p = check_palindrome(s, 0, _strlen_recurssion(s));
return (p);
}
}
/**
* _strlen_recurssion - function that returns string length
* @s: string to checked
* Return: length
*/
int _strlen_recurssion(char *s)
{
int length;
if (*s == '\0')
{
return (0);
}
else
{
length = 1 + _strlen_recurssion(s + 1);
return (length);
}
}
/**
* check_palindrome - function that returns 1 if a string is a palindrome
* and 0 if not
* @s: string to checked
* @i: iterator
* @length: string length
* Return: 1 (palindrome) or 0  (otherwise)
*/
int check_palindrome(char *s, int i, int length)
{
int c;
if (*(s + i) != *(s + length - 1))
{
return (0);
}
else if (i >= length)
{
return (1);
}
else
{
c = check_palindrome(s, i + 1, length - 1);
return (c);
}
}

