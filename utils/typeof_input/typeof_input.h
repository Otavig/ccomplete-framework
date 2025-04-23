#ifndef TYPEOF_INPUT_H
#define TYPEOF_INPUT_H

// Enum declaration
typedef enum {
    INT, FLOAT, STRING, CHAR
} DataType;

// Function prototype
DataType typeof_input(const char* input);
void parse_value(const char* input);

#endif // TYPEOF_INPUT_H
