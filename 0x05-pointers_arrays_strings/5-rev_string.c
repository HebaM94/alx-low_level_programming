#include "main.h"
/**
* rev_string - function that reverses a string
* @s: The string to be reversed
* Return: void
*/
void rev_string(char *s)
{
char rev = s[0];
int i;
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (i = 0; i < length; i++)
{
length--;
rev = s[i];
s[i] = s[length];
s[length] = rev;
}
}

