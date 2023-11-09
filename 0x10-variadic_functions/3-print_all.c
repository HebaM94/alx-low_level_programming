#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - function that prints anything
* @format: list of types of arguments passed to the function
* @...: A variable number of strings to be printed
* Return: void
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *s = "";
va_list any;
va_start(any, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", s, va_arg(any, int));
break;
case 'i':
printf("%s%d", s, va_arg(any, int));
break;
case 'f':
printf("%s%f", s, va_arg(any, double));
break;
case 's':
str = va_arg(any, char *);
if (!str)
str = "(nil)";
printf("%s%s", s, str);
break;
default:
i++;
continue;
}
s = ", ";
i++;
}
}
printf("\n");
va_end(any);
}

