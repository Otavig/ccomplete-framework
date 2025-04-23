#include <stdio.h>
#include "input_int.h"

/**
 * The function `input_int` takes a message as input, displays it to the user, reads an integer input
 * from the user, and returns the integer.
 * 
 * @param msg The `msg` parameter in the `input_int` function is a pointer to a constant character
 * array, which is used to display a message prompting the user for input.
 * 
 * @return The function `input_int` is returning an integer value that is read from the user input
 * using `scanf`.
 */
int input_int(const char* msg) {
    int i;
    printf("%s ", msg);
    scanf(" %d", &i);
    return i;
}
