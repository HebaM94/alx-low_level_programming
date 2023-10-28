#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
int checker(char *str);
/**
* checker - check - string there are digit
* @str: array str
* Return: 1 (digit) 0 (not digit)
*/
int checker(char *str)
{
unsigned int count;
count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}
/**
* main - program that adds positive numbers.
* @argc: number of arguments
* @argv: array of arguments
* Return:  0 (Success)
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (checker(argv[i]))
{
sum = sum + atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
return (0);
}

