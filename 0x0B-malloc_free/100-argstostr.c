#include <stdlib.h>
#include "main.h"
/**
* *argstostr - function that concatenates all the arguments of program.
* @ac: number of arguments passed to the program
* @av: one-dimensional array of strings
* Return:  or NULL (ac == 0 or av == NULL or fail)
*/
char *argstostr(int ac, char **av)
{
int i, j, x, y;
char *str;
x = 0;
y = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
x++;
}
}
x = x + ac;
str = malloc((sizeof(char) * x)+1);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[y] = av[i][j];
y++;
}
if (str[y] == '\0')
{
str[y++] = '\n';
}
}
return (str);
}

