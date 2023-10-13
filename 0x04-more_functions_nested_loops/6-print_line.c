#include "main.h"
/**
* print_line - a function that draws straight line
* in the terminal
* @n: number of times the character should be printed
* Return: void
*/
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
