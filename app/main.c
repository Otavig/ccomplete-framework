#include "../app.h"

int main(void) {
    printf("=======================================\n");
    printf("       Welcome to the CCOMPLETE        \n");
    printf("         DEMONSTRATION PROGRAM         \n");
    printf("=======================================\n\n");

    // Initialize a dynamic stack
    IStack stack = create_stack();

    printf("Let's begin by populating a dynamic stack with integers.\n\n");

    char response = 'y';
    while (tolower(response) == 'y') {
        int number = input_int("Enter an integer to push to the stack: ");
        spush(&stack, number);

        response = input_char("Would you like to add another number? (y/n): ");
    }

    printf("\n📦 Current stack contents:\n");
    sprint_stack(&stack);

    // Optional comment input
    char *comment = NULL;
    fgets_dynamic("\n💬 Leave a comment to be saved: ", &comment);
    if (comment != NULL) {
        printf("📝 Comment saved: \"%s\"\n", comment);
        free(comment);
    }

    // Retrieve and parse value by index
    int index = input_int("\n🔎 Enter an index to retrieve from the stack: ");
    int value_at_index = sget_at_index(&stack, index);

    if (value_at_index != -1) {
        printf("✅ Value at index %d: %d\n", index, value_at_index);

        char value_str[20];
        snprintf(value_str, csize(value_str), "%d", value_at_index);
        parse_value(value_str);
    } else {
        printf("❌ Invalid index (%d): Could not retrieve value.\n", index);
    }

    printf("\n🎉 === Demo completed successfully ===\n");
    return 0;
}
