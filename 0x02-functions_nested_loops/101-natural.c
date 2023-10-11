#include <stdio.h>
/**
* main - a program that computes and prints the sum of all
* the multiples of 3 or 5 below 1024
* Return: 0 (Success)
*/
int main(void)
{
int n, t, f, sum;
sum = 0;
for (n = 0; n < 1024; n++)
{
t = n % 3;
f = n % 5;
if (t == 0 || f == 0)
{
sum += n;
}
}
printf("%d\n", sum);
return (0);
}
