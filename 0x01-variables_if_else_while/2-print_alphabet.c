#include <stdio.h>
/**
* main - a program to write alpahbits in lowercase using putchar
*Return: 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
