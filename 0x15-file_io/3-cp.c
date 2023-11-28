#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
void checker(int state, int fd, char *filename, char mode);
/**
* checker - function the checks if a file can be opened or closed
*@state: state of the file to be opened
*@fd: file descriptor
*@filename: file to be opened
*@mode: mode of the file
* Return: void
*/
void checker(int state, int fd, char *filename, char mode)
{
if (mode == 'C' && state == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && state == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && state == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
/**
* main - program copies the content of a file to another file
*@argc: arguments count.
*@argv: arguments vector.
* Return: 0 (Success), or exit otherwise
*/
int main(int argc, char *argv[])
{
int src, dest, wr, closesrc, closedest, numread = 1024;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: copy file_from file_to\n");
exit(97);
}
src = open(argv[1], O_RDONLY);
checker(src, -1, argv[1], 'O');
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
checker(dest, -1, argv[2], 'W');
while (numread > 0)
{
numread = read(src, buffer, sizeof(buffer));
if (numread == -1)
checker(-1, -1, argv[1], 'O');
wr = write(dest, buffer, numread);
if (wr == -1)
checker(-1, -1, argv[2], 'W');
}
closesrc = close(src);
checker(closesrc, src, NULL, 'C');
closedest = close(dest);
checker(closedest, dest, NULL, 'C');
return (0);
}

