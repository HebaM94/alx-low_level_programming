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
int third;
for (first = '0'; first < '8'; first++)
{
for (second = '0'; second < '9'; second++)
{
for (third = '0'; third <= '9'; third++)
{
if (third > second > first)
{
putchar(first);
putchar(second);
putchar(third);
if (first != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
