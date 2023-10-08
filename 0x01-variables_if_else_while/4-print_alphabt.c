#include <stdio.h>
/**
* main - a program to write alpahbits in lowercase except e and q using putchar
*Return: 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
