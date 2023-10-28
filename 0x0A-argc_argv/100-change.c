#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - program that prints the minimum number of coins
* to make change for an amount of money.
* @argc: number of arguments
* @argv: array of arguments
* Return:  0 (Success) 1 (Error)
*/
int main(int argc, char *argv[])
{
int i, cents, change = 0;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cents = atoi(argv[1]);
if (cents < 0)
{
printf("%d\n", change);
return (0);
}
for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents = cents - coins[i];
change++;
}
}
printf("%d\n", change);
return (0);
}
}

