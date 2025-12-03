// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a, b;
    char op;
    int result;

    // Input two numbers and an operator
    scanf("%d %d %c", &a, &b, &op);

    // Perform operation based on operator
    switch (op) {
        case '+':
            result = a + b;
            printf("%d", result);
            break;
        case '-':
            result = a - b;
            printf("%d", result);
            break;
        case '*':
            result = a * b;
            printf("%d", result);
            break;
        case '/':
            if (b != 0)
                printf("%d", a / b);
            else
                printf("Division by zero error");
            break;
        case '%':
            if (b != 0)
                printf("%d", a % b);
            else
                printf("Division by zero error");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
