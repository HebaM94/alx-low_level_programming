#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - program that multiplies two numbers.
* @argc: number of arguments
* @argv: array of arguments
* Return:  0 (Success)
*/
int main(int argc, char *argv[])
{
int mul;
if (argc == 1 || argc > 3)
{
printf("Error\n");
return (1);
}
else if (argc > 1)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
return (0);
}

