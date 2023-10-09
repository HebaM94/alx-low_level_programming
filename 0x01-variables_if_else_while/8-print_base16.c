#include <stdio.h>
/**
* main -  a program that prints all the numbers of base 16 in lowercase
* Return: 0 (Success)
*/
int main(void)
{
int h = 0;
char hdic = 'a';
while (h < 10)
{
putchar(h + '0');
h++;
}
while (hdic <= 'f')
{
putchar(hdic);
hdic++;
}
putchar('\n');
return (0);
}
