#include "main.h"
/**
* *_memset - function that fills memory with a constant byte.
* @s: memory bytes to be used
* @b: constant byte to be used to fill the memory
* @n: number of first bytes to be filled from s by b byte
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
