#include "../app.h"

int main(void) {
    // Code base
    IStack list = create_stack();

    char response = 'y';

    while(response == 'y') {
        int value = input_int("Type an number: \n");

        spush(&list, value);

        response = tolower(input_char("Do you want to add a new number? \n"));
    }

    sprint_stack(&list);

    char *input_text = NULL;
    fgets_dynamic("Type an comment: ", &input_text);

    if (input_text != NULL) {
        printf("Text save: %s\n", input_text);
        free(input_text); 
    }

    int index = 0;
    int value_at_index = sget_at_index(&list, index);
    
    if (value_at_index != -1) { 
        printf("Value at index %d: %d\n", index, value_at_index);

        char value_str[20]; 
        snprintf(value_str, sizeof(value_str), "%d", value_at_index);
        parse_value(value_str);
    } else {
        printf("Invalid index: %d\n", index);
    }

    return 0;
}