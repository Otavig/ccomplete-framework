#include <stdio.h>
#include "input_char.h"

/**
 * The function `input_char` takes a message as input, displays it to the user, reads a single
 * character input from the user, and returns that character.
 * 
 * @param msg The `msg` parameter in the `input_char` function is a pointer to a constant character
 * array (string) that represents the message or prompt to be displayed to the user when requesting
 * input.
 * 
 * @return The function `input_char` is returning a single character inputted by the user after
 * displaying the message specified by the `msg` parameter.
 */
char input_char(const char* msg){
    char c;
    printf("%s ", msg);
    scanf(" %c", &c);
    return c;
}
