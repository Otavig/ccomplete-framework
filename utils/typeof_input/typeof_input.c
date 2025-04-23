#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * The above functions determine the data type of an input value and parse it accordingly.
 * 
 * @param input ```c
 * 
 * @return The `typeof_input` function determines the data type of the input string provided based on
 * its content. It returns one of the following values from the `DataType` enum: `INT` for integer,
 * `FLOAT` for floating-point number, `STRING` for string, or `CHAR` for single character.
 */
typedef enum {
    INT, FLOAT, STRING, CHAR
} DataType;

DataType typeof_input(const char* input) {
    if (strlen(input) == 1 && isalpha(input[0])) {
        return CHAR; 
    }

    int has_dot = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.') {
            has_dot = 1;
        } else if (!isdigit(input[i]) && input[i] != '-' && input[i] != '+') {
            return STRING;
        }
    }

    if (has_dot) {
        return FLOAT;
    }

    return INT; 
}

void parse_value(const char* input) {
    DataType type = typeof_input(input);

    switch (type) {
        case INT: {
            int value = atoi(input);
            printf("Type: Integer, Value: %d\n", value);
            break;
        }
        case FLOAT: {
            float value = atof(input);
            printf("Type: Float, Value: %.2f\n", value);
            break;
        }
        case STRING: {
            printf("Type: String, Value: %s\n", input);
            break;
        }
        case CHAR: {
            printf("Type: Caracter, Value: %c\n", input[0]);
            break;
        }
    }
}