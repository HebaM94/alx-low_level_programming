#include <stdio.h>
/**
* main - a program that prints the first 50 Fibonacci numbers
* starting with 1 and 2, followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
int f, n;
unsigned long next;
unsigned long one = 1;
unsigned long two = 2;
n = 50;
printf("%lu, %lu", one, two);
for (f = 2; f < n; f++)
{
next = one + two;
printf(", %lu", next);
one = two;
two = next;
}
printf("\n");
return (0);
}
