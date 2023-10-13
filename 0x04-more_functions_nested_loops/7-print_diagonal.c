#include "main.h"
/**
* print_diagonal - a function that draws diagonal line
* on the terminal
* @n: number of times the character \ should be printed
* Return: void
*/
void print_diagonal(int n)
{
int i, c;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
c = 2;
while (c <= i)
{
_putchar(' ');
c++;
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
