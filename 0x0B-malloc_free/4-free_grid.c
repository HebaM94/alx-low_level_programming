#include <stdlib.h>
#include "main.h"
/**
* ree_grid - function that frees a 2 dimensional grid previously created
* by alloc_grid function.
* @grid: to be freed.
* @height: hight of grid.
* Return: void
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i ++)
{
free(grid[i]);
}
free(grid);
}
