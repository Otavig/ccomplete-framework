#include <stddef.h>
#include "bisort.h"
#include "../swap.h"

/**
 * Sorts an array of integers using the Bubble Sort algorithm.
 * 
 * The Bubble Sort algorithm repeatedly steps through the list, compares adjacent elements, and swaps them
 * if they are in the wrong order. The pass through the list is repeated until the list is sorted.
 * 
 * @param list The array of integers to be sorted.
 * @param size The number of elements in the array.
 */
void bisort(int *list, int size) {
    for(int i = 0; i < size; i++) {
        int is_sorted = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if(list[j] > list[j + 1]) {
                swap(list, j, j+1);
                is_sorted = 1;
            }
        }

        if(is_sorted == 1) {
            break;
        }
    }
}
