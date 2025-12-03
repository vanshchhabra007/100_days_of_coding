Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int n, original, reversed = 0, digit;

    // Input number
    scanf("%d", &n);

    original = n;  // Store original number

    // Reverse the number
    while (n > 0) {
        digit = n % 10;               // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        n = n / 10;                   // Remove last digit
    }

    // Check palindrome
    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
