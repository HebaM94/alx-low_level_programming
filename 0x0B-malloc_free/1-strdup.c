#include <stdlib.h>
#include "main.h"
/**
* *_strdup - function that returns a pointer to a newly allocated
* space in memory,
* which contains a copy of the string given as a parameter.
* @str: string to be dublicated
* Return: pointer to duplicated string,
* or NULL if insufficient memory was available or str = NULL
*/
char *_strdup(char *str)
{
char *dupstr;
int i, counter = 0;
if (str == NULL)
{
return (NULL);
}
while (str[counter] != '\0')
{
counter++;
}
dupstr = malloc(sizeof(char) * (counter + 1));
if (dupstr == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
dupstr[i] = str[i];
}
return (dupstr);
}

