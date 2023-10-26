#include "main.h"
int natural_sqrt(int n, int i);
/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: number to checked
* Return: s or -1  (when no natural sqrt)
*/
int _sqrt_recursion(int n)
{
int s1;
if (n < 0)
{
return (-1);
}
else
{
s1 = natural_sqrt(n, 0);
return (s1);
}
}
/**
* natural_sqrt - function that returns the natural square root of a number.
* @n: number to checked
* @i: number of iteration
* Return: s2 or -1  (when no natural sqrt)
*/
int natural_sqrt(int n, int i)
{
int s2;
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
else
{
s2 = natural_sqrt(n, i + 1);
return (s2);
}
}

