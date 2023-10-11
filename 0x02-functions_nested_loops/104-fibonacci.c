#include <stdio.h>
/**
* main - finds and prints the first 98 Fibonacci numbers
* starting with 1 and 2, followed by a new line.
* Return: 0 (Success)
*/
int main(void)
{
unsigned long first, second, next;
int count;
first = 1;
second = 2;
count = 2;
printf("%lu, %lu", first, second);
while (count < 98)
{
next = first + second;
first = second;
second = next;
printf(", %lu", next);
count++;
}
printf("\n");
return (0);
}
