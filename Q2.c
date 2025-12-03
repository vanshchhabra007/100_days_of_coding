//Q2.Write a program to input two numbers and display their sum, difference, product, and quotient.//

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nSum = %d", a + b);
    printf("\nDifference = %d", a - b);
    printf("\nProduct = %d", a * b);
    printf("\nQuotient = %d\n", a / b);

    return 0;
}
