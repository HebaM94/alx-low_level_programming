#include "main.h"
int check_prime(int n, int i);
/**
* is_prime_number - function that returns 1 if the input integer
* is a prime number,
* otherwise return 0.
* @n: number to checked
* Return: 1 (prime) or 0  (otherwise)
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (check_prime(n, n - 1));
}
/**
* check_prime - function that returns 1 if the input integer is a prime number,
* otherwise return 0.
* @n: number to checked
* @i: iterator
* Return: 1 (prime) or 0  (otherwise)
*/
int check_prime(int n, int i)
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (check_prime(n, i - 1));
}

