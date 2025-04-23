#include <stdio.h>
#include <stdarg.h>
#include "input_int.h"

/**
 * The function `input_int` reads an integer input from the user with error handling for invalid
 * inputs.
 * 
 * @param fmt The `fmt` parameter in the `input_int` function is a format string that specifies how the
 * function should display the prompt message to the user before reading an integer input. It is used
 * with variable arguments to print formatted output using `vprintf` function.
 * 
 * @return The function `input_int` returns an integer value that is read from the user input.
 */
int input_int(const char* fmt, ...) {
    int i;
    int resultado;

    if (fmt != NULL) {
        va_list args;
        va_start(args, fmt);
        vprintf(fmt, args);
        va_end(args);
    }

    while (1) {
        resultado = scanf("%d", &i);

        if (resultado == 1) {
            break;
        } else {
            printf("Invalid input, please try again: ");
            while (getchar() != '\n');
        }
    }

    return i; 
}