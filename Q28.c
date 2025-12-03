// Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    // Input value of n
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Display the result
    printf("%d", product);

    return 0;
}
