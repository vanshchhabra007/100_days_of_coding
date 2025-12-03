// Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    scanf("%d", &n);

    // Calculate sum using the formula
    sum = n * (n + 1) / 2;

    // Display result
    printf("Sum=%d", sum);

    return 0;
}
