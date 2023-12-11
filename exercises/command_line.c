#include "simple_shell.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * *interpreter - function that reads user input
 * Return: cmd
*/

char *interpreter()
{
char *cmd = NULL;
size_t n = 0;
ssize_t input;
while (1)
{
    if (isatty(STDIN_FILENO)) 
       write(STDOUT_FILENO, '$ ',2);
    input = getline(&cmd, &n, stdin);
    if (input == -1)
    {
        write(STDOUT_FILENO, "\n", 1);
        if (cmd != NULL)
        {
            free(cmd);
            cmd = NULL;
        }
        close(STDOUT_FILENO);
        break;
    }
    remove_newline(cmd);
    if (_strcmp(cmd, "exit") == 0) 
    {
        exit(1);
    }
}
free (cmd);
return(cmd);
}

/**
 * execution - function that parse and excute commands
 * @cmd: command to be parsed and executed
 * Return: void
*/

void execution(char *cmd)
{
if (access(cmd, X_OK) == 0) {
        
        pid_t pid = fork();

        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (pid == 0) {
            
            char *args[] = {cmd, NULL};
            execve(cmd, args, NULL);
            
            perror("execve");
            exit(EXIT_FAILURE);
        } else {
            
            wait(NULL); 
        }
    } else {
        write(STDOUT_FILENO, "./shell: command not found\n", 27);
    }
}

