#include "main.h"
/**
* print_square - a function that prints a square
* followed by a new line
* @size: number represent square size
* Return: void
*/
void print_square(int size)
{
int i, e;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (e = 1; e <= size; e++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
