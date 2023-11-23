#include <stddef.h>
#include "main.h"
/**
* get_endianness - function that checks the endianness.
* Return:  0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
unsigned int num = 1;
char *check = (char *)&num;
if (*check)
{
return (1);
}
else
{
return (0);
}
}

