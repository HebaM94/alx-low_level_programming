#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output
*@filename: file to be read
*@letters:  the number of letters it should read and print
* Return: actual number of letters it could read and print or 0 if
* file can not be opened or read
* filename is NULL
* write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int filedes;
char *buffer;
ssize_t lenread, lenwrite;
if (filename == NULL)
return (0);
filedes = open(filename, O_RDONLY);
if (filedes == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(filedes);
return (0);
}
lenread = read(filedes, buffer, letters);
close(filedes);
if (lenread == -1)
{
free(buffer);
return (0);
}
lenwrite = write(STDOUT_FILENO, buffer, lenread);
free(buffer);
if (lenwrite != lenread)
return (0);
return (lenread);
}

