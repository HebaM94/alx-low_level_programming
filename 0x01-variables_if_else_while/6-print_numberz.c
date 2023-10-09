#include <stdio.h>
/**
* main - a program to print digits of base 10 starting from 0 using putchar
* Return: 0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
