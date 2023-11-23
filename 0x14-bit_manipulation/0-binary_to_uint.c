#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
* binary_to_uint - function  that converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int conv;
conv = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
conv <<= 1;
if (b[i] == '1')
conv += 1;
}
return (conv);
}

