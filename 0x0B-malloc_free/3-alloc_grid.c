#include <stdlib.h>
#include "main.h"
/**
* **alloc_grid - function that returns a pointer to
* a 2 dimensional array of integers.
* @width: number of elements in the array.
* @height: number of arrays.
* Return: ar or NULL (failure or width and hight 0 or negative)
*/
int **alloc_grid(int width, int height)
{
int **ar;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
ar = malloc(sizeof(int) * height);
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ar[i] = malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
for (; i >= 0; i--)
{
free(ar[i]);
}
free(ar);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}

