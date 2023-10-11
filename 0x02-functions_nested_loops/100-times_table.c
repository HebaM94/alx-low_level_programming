#include "main.h"
/**
* print_times_table - a function to prints the n times table,
* starting with 0
* @n: The number to be used to calculate the times table
* Return: void
*/
void print_times_table(int n)
{
int x, i, t;
if (n >= 0 && n < 15)
for (x = 0; x <= n; x++)
{
for (i = 0; i <= n; i++)
{
t = x * i;
if (t > 99)
{
_putchar(',');
_putchar(' ');
_putchar((t / 100) + '0');
_putchar(((t - 100) / 10) + '0');
_putchar(((t - 100) % 10) + '0');
}
else
{
if (t > 9 && t <= 99)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((t / 10) + '0');
_putchar((t % 10) + '0');
}
else
{
if (i != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar (t + '0');
}
}
}
_putchar('\n');
}
}

