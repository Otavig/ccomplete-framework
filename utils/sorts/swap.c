#include "swap.h"

/**
 * Swaps two elements in an integer array.
 * 
 * @param list The array of integers where the elements will be swapped.
 * @param i The index of the first element to swap.
 * @param j The index of the second element to swap.
 */
void swap(int *list, int i, int j) {
    int temp = list[i];  // Store the value of the first element in a temporary variable
    list[i] = list[j];   // Assign the value of the second element to the first
    list[j] = temp;      // Assign the stored value of the first element to the second
}
