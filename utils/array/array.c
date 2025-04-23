#include "array.h"
#include <stdio.h>

/**
 * Creates an array structure from a pointer to an integer array and its size.
 * 
 * @param data A pointer to the integer array that will be wrapped by the `Array` structure.
 * @param size The size of the array (the number of elements in `data`).
 * 
 * @return An `Array` structure containing the provided `data` and `size`.
 */
Array create_array(int *data, size_t size) {
    Array arr = {data, size};  
    return arr;
}

/**
 * Prints the elements of an array to the standard output (console).
 * 
 * @param arr The `Array` structure whose elements will be printed.
 */
void print_array(Array arr) {
    for (size_t i = 0; i < arr.size; i++) {
        printf("%d ", arr.data[i]);
    }
    printf("\n");
}
