#include "main.h"
/**
* _islower - a function to checks for lowercase character
* @c: The character to checked
* Return: 1 (c is lowercase) 0 (otherwise)
*/
int _islower(int c)
{
if (c >= 97)
{
if (c <= 122)
return (1);
}
return (0);
}
