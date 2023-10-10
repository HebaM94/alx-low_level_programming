#include "main.h"
/**
* _isalpha - a function to checks for lowercase character
* @c: The character to checked
* Return: 1 (c is lowercase or uppercase) 0 (otherwise)
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
