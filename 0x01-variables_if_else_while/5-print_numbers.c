#include <stdio.h>
/**
* main - a program to print single digit numbers of base 10 starting from 0
* Return:0 (Success)
*/
int main(void)
{
for (int digit = 0; digit <= 9; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
