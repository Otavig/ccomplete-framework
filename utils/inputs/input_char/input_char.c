#include <stdio.h>
#include <stdarg.h>
#include "input_char.h"

/**
 * The function `input_char` takes a format string and optional arguments, prints the formatted string,
 * reads a character from the user, and returns it.
 * 
 * @param fmt The `fmt` parameter in the `input_char` function is a format string that specifies how
 * the subsequent arguments should be formatted and printed using `vprintf`.
 * 
 * @return The `input_char` function returns a character inputted by the user after displaying the
 * formatted string specified by the `fmt` parameter using `vprintf`.
 */
char input_char(const char* fmt, ...) {
    char c;

    if (fmt != NULL) {
        va_list args;
        va_start(args, fmt);
        vprintf(fmt, args);
        va_end(args);
    }

    scanf(" %c", &c);  
    return c ? c : 'a';
}
