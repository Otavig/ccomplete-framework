#include <stdio.h>
#include "dcfor.h"

/**
 * Prints the elements of a character array to the standard output (console), each on a new line.
 * 
 * @param list A pointer to the character array to be printed.
 * @param size The number of elements in the array (the length of the `list`).
 */
void dcfor(char *list, int size) {
    for (int i = 0; i < size; i++) {
        printf("%c \n", list[i]);
    }
}
