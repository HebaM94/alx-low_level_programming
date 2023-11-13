#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len = 9;
    int len2 = -9;

    print_int("%d %i", len, len2);
    printf("Length:[%d, %i]\n", len2, len2);
}
