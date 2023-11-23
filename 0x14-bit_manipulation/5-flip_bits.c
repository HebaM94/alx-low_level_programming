#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
* flip_bits - function that  returns the number of bits
* you would need to flip to get from one number to another
* @n: ist number
* @m: 2nd number
* Return: number of bits needed to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int result = n ^ m;
for (i = 63; i >= 0; i--)
{
current = result >> i;
if (current & 1)
{
count++;
}
}
return (count);
}

