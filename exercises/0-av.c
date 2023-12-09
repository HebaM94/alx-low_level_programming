#include <stdio.h>
/**
* main - prints all arguments it receives.
* @argc: number of arguments
* @argv: array of arguments
* Return:  0 (Success)
*/
int main(int ac __attribute__((unused)), char *av[])
{
int i;
for (i = 0; av; i++)
{
printf("%s\n", av[i]);
}
return (0);
}