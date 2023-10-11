#include <stdio.h>
/**
* main - a program that that finds and prints the sum of the even-valued
* terms, followed by a new line.
* Return: 0 (Success)
*/
int main(void)
{
unsigned long next, sum;
unsigned long first = 1;
unsigned long second = 2;
sum = 0;
while (second <= 4000000)
{
if (second % 2 == 0)
{
sum += second;
}
next = first + second;
first = second;
second = next;
}
printf("%lu\n", sum);
return (0);
}
