#include "main.h"
/**
* print_last_digit - a function to print last digit of a number
* @n: The number to checked
* Return: lastd
*/
int print_last_digit(int n)
{
int lastd;
if (n < 0)
n = n * -1;
lastd = n % 10;
_putchar(lastd + '0');
return (lastd);
}
