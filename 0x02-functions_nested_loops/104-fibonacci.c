#include <stdio.h>
/**
* main - finds and prints the first 98 Fibonacci numbers
* starting with 1 and 2, followed by a new line.
* Return: 0 (Success)
*/
int main(void)
{
unsigned long a, a1, a2, b, b1, b2, c, h1, h2;
int f;
a = 1;
b = 2;
printf("%lu, %lu", a, b);
for (f = 3; f < 92; f++)
{
c = a + b;
printf(", %lu", c);
a = b;
b = c;
}
a1 = a / 10000000000;
a2 = a % 10000000000;
b1 = b / 10000000000;
b2 = b % 10000000000;
for (f = 93; f < 99; f++)
{
h1 = a1 + b1;
h2 = a2 + b2;
if (h2 > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);
if (f != 98)
printf(", ");
a1 = b1;
a2 = b2;
b1 = h1;
b2 = h2;
}
printf("\n");
return (0);
}
