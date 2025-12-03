// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    // Input number
    scanf("%d", &n);

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;           
        reversed = reversed * 10 + remainder;
        n = n / 10;                   
    }

    // Display reversed number
    printf("%d", reversed);

    return 0;
}
