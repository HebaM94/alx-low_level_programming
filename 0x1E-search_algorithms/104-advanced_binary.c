#include "search_algos.h"
#include <stdio.h>
#include <math.h>
int advanced_binary_recursive(int *array, size_t size, int value);
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
int i;
i = rec_search(array, size, value);
if (i >= 0 && array[i] != value)
return (-1);
return (i);
}
/**
 * advanced_binary_recursive - Recursive helper function for
 * advanced_binary
 * of integers using binary search
 * @array: A pointer to the first element of the array to search.
 * @size: the number of elements in array
 * @value: The value to search for
 *
 * Return: first index where value is located or
 * -1 if array is NULL or value not present
*/
int advanced_binary_recursive(int *array, size_t size, int value)
{
size_t i, half = size / 2;
if (array == NULL || size == 0)
return (-1);
printf("Searching in array");
for (i = 0; i < size; i++)
printf("%s %d", (i == 0) ? ":" : ",", array[i]);
printf("\n");
if (half && size % 2 == 0)
half--;
if (value == array[half])
{
if (half > 0)
return (rec_search(array, half + 1, value));
return ((int)half);
}
if (value < array[half])
return (rec_search(array, half + 1, value));
half++;
return (rec_search(array + half, size - half, value) + half);
}
