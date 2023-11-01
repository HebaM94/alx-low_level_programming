#include <stdlib.h>
#include "main.h"
int count_word(char *s);
/**
* **strtow - function that splits a string into words.
* @str: string to be splited
* Return:  ar or NULL ( str == NULL or “” or if function fails)
*/
char **strtow(char *str)
{
int i, j, c, length, words, start, end;
char **ar, *temp;
j = 0;
c = 0;
length = 0;
while (*(str + length))
{
length++;
}
words = count_word(str);
if (words == 0)
{
return (NULL);
}
ar = (char **) malloc(sizeof(char *) * (words + 1));
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i <= length; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
temp = (char *) malloc(sizeof(char) * (c + 1));
if (temp == NULL)
{
return (NULL);
}
while (start < end)
{
*temp++ = str[start++];
}
*temp = '\0';
ar[j] = temp - c;
j++;
c = 0;
}
}
else if (c++ == 0)
{
start = i;
}
}
ar[j] = NULL;
return (ar);
}
/**
* count_word - helper function to count the number of words in a string
* @s: string to be checked
* Return: number of words
*/
int count_word(char *s)
{
int x, y, z;
y = 0;
z = 0;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == ' ')
y = 0;
else if (y == 0)
{
y = 1;
z++;
}
}
return (z);
}

