#include "main.h"
/**
 * print_int - function that handels conversion specifiers
 * of d and i specifiers
 * @format: list of types of specifiers passed to the function
 * @...: A variable number of integers to be printed
 * Return: integer
*/
int print_int(const char *format, ...)
{
    int num, counter, decimal, digit;
    char *sign;
    decimal = 1;
    counter = 0;
va_list integers;
va_start(integers, format);
while (*format)
{
if (*format == '%' && (format[1] == 'd' || format[1] == 'i'))
{
num = va_arg(integers, int);
if (num < 0)
{
    *sign = '-';
write (1, *sign, 1);
num = - num;
counter++;
}
while ((num / decimal) >= 10)
{
    decimal = decimal * 10;
}
while (decimal % 10 == 0)
{
digit = num / decimal;
num -= digit * decimal;
decimal = decimal / 10;
write (1, &digit + counter, 1);
counter++;
}
}
}
return (counter);
}