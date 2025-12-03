// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // Use long long to handle large results

    // Input number
    scanf("%d", &n);

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    // Display result
    printf("%lld", fact);

    return 0;
}
