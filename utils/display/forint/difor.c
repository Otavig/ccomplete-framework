#include <stdio.h>
#include "difor.h"

/**
 * Prints the elements of an integer array to the standard output (console), each on a new line.
 * 
 * @param list A pointer to the integer array to be printed.
 * @param size The number of elements in the array (length of the `list`).
 */
void difor(int *list, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d \n", list[i]);
    }
}
