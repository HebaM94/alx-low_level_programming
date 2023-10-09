#include <stdio.h>
/**
* main - a program that prints all possible different combinations
* of two digits
* Return: 0 (Success)
*/
int main(void)
{
int first = '0';
int second = '0';
for (; first <= '9'; first++)
{
for (; second <= '9'; second++)
{
  if(! ((first == second) || (second > first)))
{
putchar(first);
putchar(second);
if (!(first == '8' && second == '9')
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
