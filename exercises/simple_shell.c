#include "simple_shell.h" 
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

/**
 * main - program to run a simple shell
 * Return: 0 (Success)
*/

int main(void)
{
char *cmd = NULL;
size_t n = 0;

    while (1) {
        cmd = interpreter();

        if (cmd != NULL) {
            execute_command(cmd);
        }
    }

    return (0);
}