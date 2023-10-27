#include "main.h"
/**
* *_strstr- function that locates a substring
* @haystack: string to be checked
* @needle: string to be compared to s
* Return: s or '\0' (NULL - no matches)
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*h ==  *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return ('\0');
}

