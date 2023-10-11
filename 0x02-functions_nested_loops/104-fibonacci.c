#include <stdio.h>
/**
* main - finds and prints the first 98 Fibonacci numbers
* starting with 1 and 2, followed by a new line.
* Return: 0 (Success)
*/
int main(void)
{
unsigned long first, second, next;
int count, n;
n = 98;
first = 1;
second = 2;
printf("%lu, %lu", first, second);
for (count = 3; count < n; count++)
{
next = first + second;
if (count < n)
{
printf(", %lu", next);
}
else
{
printf("%lu\n", next);
}
first = second;
second = next;
}
return (0);
}
