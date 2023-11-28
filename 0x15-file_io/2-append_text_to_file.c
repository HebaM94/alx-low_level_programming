#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
* append_text_to_file - function that appends text at the end of a file
*@filename: file to be created
*@text_content: NULL terminated string to write to the file
* Return: 1 on success or file exist, -1 on failure:
* filename is NULL
* file is not exist
* write fails or does not write the expected amount of bytes
*/
int append_text_to_file(const char *filename, char *text_content)
{
int filedes, lenwrite, i = 0;
if (filename == NULL)
return (-1);
filedes = open(filename, O_WRONLY | O_APPEND);
if (filedes == -1)
return (-1);
if (text_content)
{
while (text_content[i])
{
i++;
}
lenwrite = write(filedes, text_content, i);
if (lenwrite == -1)
return (-1);
}
close(filedes);
return (1);
}

