#ifndef _PRINTF_H
#define _PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stddef.h>

/**
* struct sp - Struct sp
* @sp: The specifier
* @f: The function associated with the specifier
*/
typedef struct sp
{
char *sp;
int (*f)(const char *format, ...);
} sp_f;

int print_int(const char *format, ...);

int _printf(const char *format, ...);



#endif
