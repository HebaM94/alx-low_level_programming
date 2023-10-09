#include <stdio.h>
/**
* main - a program that prints all possible different combinations
* of two digits
* Return: 0 (Success)
*/
int main(void)
{
int first;
int second;
for (first = '0'; first < '9'; first++)
{
for (second = '0'; second <= '9'; second++)
{
if (second > first)
{
putchar(first);
putchar(second);
if (first != '8')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
