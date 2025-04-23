#include "sbint.h"

/**
 * Performs a binary search on a sorted array to find the index of a target value.
 * 
 * @param list A pointer to the sorted integer array to be searched.
 * @param size The number of elements in the array.
 * @param target The integer value to search for within the array.
 * 
 * @return The index of the target value if found, or -1 if the target value is not in the array.
 */
int sbint(int *list, int size, int target) {
    int l = 0, r = size - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Check if the target is present at mid
        if (list[mid] == target)
            return mid;
        // If the target is smaller, ignore the right half
        else if (list[mid] > target)
            r = mid - 1;
        // If the target is larger, ignore the left half
        else
            l = mid + 1;
    }

    // Target not found
    return -1;
}
