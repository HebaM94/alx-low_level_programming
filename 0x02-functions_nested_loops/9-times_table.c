#include "main.h"
/**
* times_table - a function to prints 9 times table starting with 0
* Return: void
*/
void times_table(void)
{
int n, i, t;
for (n = 0; n <= 9; n++)
{
for (i = 0; i <= 9; i++)
{
t = n * i;
if (t > 9)
{
_putchar(',');
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
_putchar (t + '0');
}
}
}
_putchar('\n');
}
}
