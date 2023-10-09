#include <stdio.h>
/**
* main - a program to print single digit numbers of base 10 starting from 0
* Return:0 (Success)
*/
int main(void)
{
int digit = 0;
while (digit < 10)
{
printf("%d", digit);
digit++;
}
putchar('\n');
return (0);
}
