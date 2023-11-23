#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
* _pow - funcintion that calculates tha base of power
* @base: base of the exponent
* @power: power of the exponent
* Return: value of (base ^ power)
*/
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int num;
unsigned int i;
num = 1;
for (i = 1; i <= power; i++)
num *= base;
return (num);
}
/**
* print_binary - function that prints the binary representation of a number.
* @n: pointing to a string of 0 and 1 chars
* Return: void
*/
void print_binary(unsigned long int n)
{
{
unsigned long int p, result;
char handler = 0;
p = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (p != 0)
{
result = n & p;
if (result == p)
{
handler = 1;
_putchar('1');
}
else if (handler == 1 || p == 1)
{
_putchar('0');
}
p >>= 1;
}
}
}

