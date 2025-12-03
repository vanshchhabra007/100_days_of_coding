Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    // Input number
    scanf("%d", &n);

    // Special case: if number is 0
    if (n == 0) {
        printf("0");
        return 0;
    }

    // Convert to binary by storing remainders
    while (n > 0) {
        binary[i] = n % 2;  // Store remainder
        n = n / 2;          // Divide by 2
        i++;
    }

    // Print binary in reverse (since LSB is stored first)
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
