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
  if (!((second == first) || (first > second)))
{
putchar(first);
putchar(second);
if (!(second == '9' && first == '8'))
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
