#include <stdlib.h>
#include <time.h>
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
printf(n, "is positive");
else
if (n == 0)
printf(n, "is zero");
else
printf(n, "is negative");
return (0);
}
