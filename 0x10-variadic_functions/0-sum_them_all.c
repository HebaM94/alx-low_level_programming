#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - function that returns the sum of all its parameters
* @n: The number of paramters passed to the function
* @...: A variable number of paramters to calculate the sum of
* Return: sum  or 0 (if n == 0)
*/
int sum_them_all(const unsigned int n, ...)
{
va_list p;
unsigned int i, sum = 0;
va_start(p, n);
for (i = 0; i < n; i++)
sum += va_arg(p, int);
va_end(p);
return (sum);
}

