#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int _strlen(char *s);
char *_strncpy(char *dest, const char *src, int n);
char *_strchr(char *s, char c);
void remove_newline(char *input);
char *interpreter();
void execution(char *cmd);


#endif

//void remove_line(char *command, char **lineremoved);
//char *input(char *cmd, size_t n, ssize_t user_input);