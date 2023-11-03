#include <stdlib.h>
#include "main.h"
/**
* *array_range - function that creates an array of integers.
* @min: start of the array
* @max: end of the array
* Return: pointer to the newly created array
* or NULL (if min > max or malloc fails)
*/
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
{
return (NULL);
}
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
arr[i] = min;
min++;
}
return (arr);
}

