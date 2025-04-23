#ifndef QISORT_H
#define QISORT_H

/**
 * Sorts an array of integers using the Quick Sort algorithm.
 * 
 * @param list The array of integers to be sorted.
 * @param low The starting index of the portion of the array to be sorted.
 * @param high The ending index of the portion of the array to be sorted.
 */
void qisort(int *list, int low, int high);

/**
 * Partitions the array around a pivot element and returns the pivot index.
 * 
 * @param list The array of integers to be partitioned.
 * @param low The starting index of the portion of the array to be partitioned.
 * @param high The ending index of the portion of the array to be partitioned.
 * 
 * @return The index of the pivot element after partitioning.
 */
int partial(int *list, int low, int high);

#endif
