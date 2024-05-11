#include "search_algos.h"
#include <stdio.h>
#include <math.h>
int advanced_binary_recursive(int *array, size_t low, size_t high, int value);
/**
 * advanced_binary - function that searches for a value in a sorted
 * array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or
 * -1 if array is NULL or value not present
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);
return (advanced_binary_recursive(array, 0, size - 1, value));
}
/**
 * advanced_binary_recursive - Recursive helper function for
 * advanced_binary
 * of integers using binary search
 * @array: A pointer to the first element of the array to search.
 * @low: The starting index of the [sub]array to search
 * @high: The ending index of the [sub]array to search
 * @value: The value to search for
 *
 * Return: first index where value is located or
 * -1 if array is NULL or value not present
*/
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
size_t mid, i;
if (low > high)
return (-1);
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
else
printf("\n");
}
mid = low + (high - low) / 2;
if (array[mid] == value)
{
if (mid == low || array[mid - 1] != value)
return (mid);
else
return (advanced_binary_recursive(array, low, mid, value));
}
else if (array[mid] < value)
return (advanced_binary_recursive(array, mid + 1, high, value));
else
return (advanced_binary_recursive(array, low, mid - 1, value));
}
