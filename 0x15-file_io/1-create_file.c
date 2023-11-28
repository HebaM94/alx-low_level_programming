#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
* create_file - function that creates a file.
*@filename: file to be created
*@text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure:
* file can not be created, file can not be written, write “fails”
* filename is NULL
* write fails or does not write the expected amount of bytes
*/
int create_file(const char *filename, char *text_content)
{
int filedes, lenwrite, i = 0;
if (filename == NULL)
return (-1);
filedes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (filedes == -1)
return (-1);
if (!text_content)
text_content = "";
while (text_content[i])
{
i++;
}
lenwrite = write(filedes, text_content, i);
if (lenwrite == -1)
return (-1);
close(filedes);
return (1);
}

