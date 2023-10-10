#include "main.h"
/**
* print_alphabet - a function to write alpahbits in lowercase
* using _putchar
* Return: void
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
