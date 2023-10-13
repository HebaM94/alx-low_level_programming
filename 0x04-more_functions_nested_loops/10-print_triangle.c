#include "main.h"
/**
* print_triangle - a function that prints a triangle
* followed by a new line
* @size: number represent triangle size
* Return: void
*/
void print_triangle(int size)
{
int i, e, c;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
c = i;
while (c != size)
{
_putchar(' ');
c++;
}
for (e = 1; e <= i; e++)
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
