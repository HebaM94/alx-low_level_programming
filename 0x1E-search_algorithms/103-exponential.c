#include "search_algos.h"
#include <stdio.h>
#include <math.h>
int bin_search(int *array, size_t low, size_t high, int value);
/**
 * exponential_search - function that searches for a a value in a sorted
 * array of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or
 * -1 if array is NULL or value not present
 */
int exponential_search(int *array, size_t size, int value)
{
size_t i, i;
if (array == NULL)
return (-1);
if (array[0] != value)
{
i = 0;
while (i < size && array[i] <= value)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
i *= 2;
}
}
printf("Value found between indexes [%ld] and [%ld]\n", i / 2,
(i < size ? i : size - 1));
return (bin_search(array, i  / 2, (i < size ? i : size - 1), value));
}
/**
 * bin_search - Searches for a value in a sorted array
 * of integers using binary search
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the [sub]array to search
 * @right: The ending index of the [sub]array to search
 * @value: The value to search for
 *
 Return: first index where value is located or
* -1 if array is NULL or value not present
*/
int bin_search(int *array, size_t low, size_t high, int value)
{
size_t mid, i;
if (array == NULL)
return (-1);
while (low <= high)
{
printf("Searching in array: ");
for (i = low; i < high; i++)
{
printf("%d", array[i]);
}
printf("%d\n", array[i]);
mid = low + (high - low) / 2;
if (array[mid] == value)
return (mid);
if (array[mid] > value)
high = mid - 1;
else
low = mid + 1;
}
return (-1);
}
