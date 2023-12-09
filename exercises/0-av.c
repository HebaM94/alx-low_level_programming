#include <stdio.h>
/**
* main - prints all arguments it receives.
* @ac: number of arguments
* @av: array of arguments
* Return:  0 (Success)
*/
int main(int ac __attribute__((unused)), char *av[])
{
    char **arg = av; // Pointer to the start of the arguments

    // Iterate through arguments until NULL is encountered
    while (*arg != NULL) {
        printf("%s\n", *arg);
        arg++; // Move to the next argument
    }
return (0);
}