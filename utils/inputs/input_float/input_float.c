#include <stdio.h>
#include <stdarg.h>

/**
 * The function `input_float` reads a float value from the user input with error handling for invalid
 * inputs.
 * 
 * @param fmt The `fmt` parameter in the `input_float` function is a format string that specifies how
 * the function should display any additional information or prompts before reading the float input
 * from the user. It is used with variable arguments to provide a flexible way to customize the input
 * prompt.
 * 
 * @return The function `input_float` returns a floating-point number entered by the user after
 * validating that the input is a valid float value. If the user enters an invalid input, they will be
 * prompted to enter a valid number until a valid float value is provided.
 */
float input_float(const char* fmt, ...) {
    float f;
    int resultado;

    if (fmt != NULL) {
        va_list args;
        va_start(args, fmt);
        vprintf(fmt, args);
        va_end(args);
    }

    while (1) {
        resultado = scanf("%f", &f);

        if (resultado == 1) {
            break;
        } else {
            printf("Entrada inválida. Por favor, insira um número válido: ");
            while (getchar() != '\n');
        }
    }

    return f;
}
