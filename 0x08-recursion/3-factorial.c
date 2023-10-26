#include "main.h"
/**
* factorial - function that returns the factorial of a given number.
* @n: number to be checked
* Return: f or -1 (when n < 0 - error)
*/
int factorial(int n)
{
int f;
if (n > 0)
{
f = n * factorial(n - 1);
return (f);
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
