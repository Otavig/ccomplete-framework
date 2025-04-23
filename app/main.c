#include "../app.h"

int main(void) {
    // Code base
    IStack list1 = create_stack();

    char res = 's';
    int value = 0;

    while(res == 's') {
        printf("Digite um numero: \n");
        scanf(" %d", &value);

        spush(&list1, value);

        printf("\nQuer adicionar mais numeros ? \n");
        scanf(" %c", &res);
        res = tolower(res);
    }


    sprint_stack(&list1);
    
    return 0;
}