#include <stdio.h>
void begin(void) __attribute__ ((constructor));
/**
* begin - prints a sentence before the main function is executed
* Return: void
*/
void begin(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

