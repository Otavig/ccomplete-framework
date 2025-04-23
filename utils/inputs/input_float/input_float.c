#include <stdio.h>
#include "input_float.h"

/**
 * The function `input_float` prompts the user for a float input using a message and returns the
 * inputted float value.
 * 
 * @param msg The `msg` parameter in the `input_float` function is a pointer to a constant character
 * array (string) that represents the message or prompt to be displayed to the user when requesting
 * input for a float value.
 * 
 * @return The function `input_float` returns a floating-point number entered by the user after
 * displaying the message specified by the `msg` parameter.
 */
float input_float(const char* msg){
    float f;
    printf("%s ", msg);
    scanf(" %f", &f);
    return f;
}
