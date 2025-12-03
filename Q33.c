Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int n, original, sum = 0, digit;

    // Input number
    scanf("%d", &n);

    original = n; // Store original number

    // Calculate sum of cubes of digits
    while (n > 0) {
        digit = n % 10;        // Extract digit
        sum += digit * digit * digit; // Add cube
        n /= 10;               // Remove digit
    }

    // Check Armstrong
    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
