#include "main.h"
/**
* print_alphabet - a function to write alphabets in lowercase
* 10 times in new lines using _putchar twice
* Return: void
*/
void print_alphabet_x10(void)
{
char letter;
int n;
for (n = 1; n <= 10; n++)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
