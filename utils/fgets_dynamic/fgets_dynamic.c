#include <stdio.h>
#include <stdlib.h>
#include "fgets_dynamic.h"

/**
 * The function `fgets_dynamic` reads a line of input from the user dynamically allocating memory as
 * needed and storing the result in a provided output variable.
 */

void flush_input() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void fgets_dynamic(const char *msg, char **output) {
    flush_input(); 
    printf("%s", msg);

    int size = 10;
    int length = 0;
    char *buffer = malloc(size * sizeof(char));

    if (buffer == NULL) {
        printf("Memory allocation failed!\n");
        *output = NULL;
        return;
    }

    int c;
    while ((c = getchar()) != EOF && c != '\n') {
        buffer[length++] = c;

        if (length == size) {
            size *= 2;
            buffer = realloc(buffer, size);
            if (buffer == NULL) {
                printf("Memory reallocation failed!\n");
                *output = NULL;
                return;
            }
        }
    }

    buffer[length] = '\0';

    *output = buffer;
}