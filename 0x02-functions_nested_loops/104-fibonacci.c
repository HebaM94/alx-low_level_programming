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
printf("%lu, %lu", first, second);
for (count = 2; count <  98; count++)
{
next = first + second;
printf(", %lu", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
