#include "main.h"
/**
* positive_or_negative - a function to prints 9 times table starting with 0
* @i: the number to be checked
* Return: void                                                                 
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else
if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}
