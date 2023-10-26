#include "main.h"
/**
* _pow_recursion - function that returns the value of x
* raised to the power of y.
* @x: number to be raised to the power.
* @y: power number
* Return: r or -1  (when y < 0 - error)
*/
int _pow_recursion(int x, int y)
{
int r;
if (y > 0)
{
r = x * _pow_recursion(x, y - 1);
return (r);
}
else if (y == 0)
{
return (1);
}
else
{
return (-1);
}
}
