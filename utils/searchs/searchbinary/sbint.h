#ifndef SBINT_H
#define SBINT_H

/**
 * Performs a binary search on a sorted array to find the index of a target value.
 * 
 * @param list A pointer to the sorted integer array to be searched.
 * @param size The number of elements in the array.
 * @param target The integer value to search for within the array.
 * 
 * @return The index of the target value if found, or -1 if the target value is not in the array.
 */
int sbint(int *list, int size, int target);

#endif
