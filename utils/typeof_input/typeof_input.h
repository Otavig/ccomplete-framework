#ifndef TYPEOF_H
#define TYPEOF_H

typedef enum {
    INT, FLOAT, STRING, CHAR
} DataType;

DataType typeof_input(const char* input);

void parse_value(const char* input);

char input_char(const char* msg);

#endif
