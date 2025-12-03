// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int num;

    // Input an integer
    scanf("%d", &num);

    // Check number using nested if–else
    if (num >= 0) {
        if (num == 0)
            printf("Zero");
        else
            printf("Positive");
    } else {
        printf("Negative");
    }

    return 0;
}
