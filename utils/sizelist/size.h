#ifndef SIZE_H
#define SIZE_H

/**
 * Macro to calculate the number of elements in a statically allocated array.
 * 
 * @param arr The statically allocated array whose size is to be determined.
 * 
 * @return The number of elements in the array.
 */
#define size(arr) (sizeof(arr) / sizeof((arr)[0]))

#endif
