#include "csize.h"

/**
 * Calculates the length of a string by iterating over each character until the null-terminator is encountered.
 * 
 * @param list A pointer to a null-terminated string whose length is to be calculated.
 * 
 * @return The length of the string (number of characters before the null-terminator).
 */
int csize(const char *list) {
    const char *end = list;

    // Iterate through the string until the null-terminator is reached.
    while (*end != '\0') {
        end++;
    }

    // The length of the string is the difference between the end pointer and the start pointer.
    return end - list;
}
