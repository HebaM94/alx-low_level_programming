#include "main.h"
/**
* more_numbers - a function that prints 10 times the numbers
* from 0 to 14 followed by new line
* Return: void
*/
void more_numbers(void)
{
int i, n;
for (i = 0; i < 10; i++)
{
n = 0;
while (n < 15)
{
if (n < 10)
{
_putchar(n + '0');
}
else
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
n++;
}
_putchar('\n');
}
}
