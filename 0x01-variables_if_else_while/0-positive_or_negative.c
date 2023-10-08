#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - a program to tell the sign of the number
* Return: 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positiv\ne", n);
else
if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
