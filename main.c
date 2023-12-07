#include <stdio.h>
#include <stdlib.h>
#include "operations.c"


int main(int argc, char* argv[]) {
    if (argc != 4) {
        printf("Es wurden %d Arugmente angegeben. Bitte geben Sie 1 Zahl, dann einen Operator ( + , - , * , / ) ein und die 2 Zahl.", argc-1);
        return 1;
    }
    int number1 = strtol(argv[1], NULL, 10);
    int number2 = strtol(argv[3], NULL, 10);
    char operation = argv[2][0];
    int result;

    switch (operation) {
        case '+':
            result = addition(number1, number2);
            break;
        case '-':
            result = subtraction(number1, number2);
            break;
        case '*':
            result = multiply(number1, number2);
            break;
        case '/':
            result = divide(number1, number2);
            break;
        default:
            printf("Wrong operator, use: ( + , - , * , / )\n");
            return 1;

    }
    printf("%d", result);
    return 0;
}