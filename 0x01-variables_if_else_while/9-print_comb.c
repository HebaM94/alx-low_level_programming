#include <stdio.h>
/**
* main - a program that prints all possible combinations
* of single-digit numbers
*Return: 0 (Success)
*/
int main(void)
{
int d;
for (d = 0; a < 10; d++)
{
putchar(d + '0');
if (d < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
