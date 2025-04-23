#include <stddef.h>
#include "qisort.h"
#include "../swap.h"

/**
 * Sorts an array of integers using the Quick Sort algorithm.
 * 
 * @param list The array of integers to be sorted.
 * @param low The starting index of the portion of the array to be sorted.
 * @param high The ending index of the portion of the array to be sorted.
 */
void qisort(int *list, int low, int high) {
    if (low < high) {
        int indexpivot = partial(list, low, high);
        qisort(list, low, indexpivot - 1); // left
        qisort(list, indexpivot + 1, high); // right
    }
}

/**
 * Partitions the array around a pivot element and returns the pivot index.
 * 
 * @param list The array of integers to be partitioned.
 * @param low The starting index of the portion of the array to be partitioned.
 * @param high The ending index of the portion of the array to be partitioned.
 * 
 * @return The index of the pivot element after partitioning.
 */
int partial(int *list, int low, int high) {
    int pivot = list[high];  // Choosing the last element as the pivot
    int i = low - 1;

    // Iterate through the array and partition it around the pivot
    for (int j = low; j < high; j++) {
        if (list[j] < pivot) {
            i++;
            swap(list, i, j);  // Swap if the element is smaller than pivot
        }
    }

    // Move the pivot to its correct position
    swap(list, i + 1, high);
    return i + 1;
}
