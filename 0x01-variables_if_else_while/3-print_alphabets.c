#include <stdio.h>
/**
* main - a program to write alpahbits in lowercase and uppercase using putchar
*Return: 0 (Success)
*/
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
