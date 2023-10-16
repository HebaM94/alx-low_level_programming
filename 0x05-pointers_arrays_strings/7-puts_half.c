#include "main.h"
/**
* puts_half - function that prints half of a string, followed by a new line.
* @str: The string to be printed
* Return: void
*/
void puts_half(char *str)
{
int length = 0;
int n, i;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
n = length / 2;
}
else if (length % 2 != 0)
{
n = (length + 1) / 2;
}
i = n;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

