#ifndef ARRAY_H
#define ARRAY_H

#include <stddef.h> 

/**
 * The `Array` structure represents an integer array with a size. 
 * It holds a pointer to the data (the array) and the size of the array (number of elements).
 */
typedef struct {
    int *data;      /**< Pointer to the integer array */
    size_t size;    /**< The number of elements in the array */
} Array;

/**
 * Creates and initializes an `Array` structure with the provided data and size.
 * 
 * @param data A pointer to the integer array that will be wrapped by the `Array` structure.
 * @param size The number of elements in the array.
 * 
 * @return An `Array` structure containing the provided `data` and `size`.
 */
Array create_array(int *data, size_t size);

/**
 * Prints the elements of the array stored in the `Array` structure to the standard output (console).
 * 
 * @param arr The `Array` structure whose elements will be printed.
 */
void print_array(Array arr);

#endif
