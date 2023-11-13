#include "main.h"
#include <stdio.h>
int main(void) {
    int count;

    count = print_int("Printing a single integer: %d\n", 42);
    printf("Characters printed: %d\n", count);

    count = print_int("Negative integer: %d\n", -123);
    printf("Characters printed: %d\n", count);

    count = print_int("Another number: %i\n", 9876);
    printf("Characters printed: %d\n", count);

    return 0;
}
