Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2; // sum from 1 to n

    // We check if there exists an x such that:
    // sum(1..x) == sum(x..n)
    // sum(1..x) = x*(x+1)/2
    // sum(x..n) = totalSum - (x*(x-1)/2)
    
    int x;
    for (x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = totalSum - (x * (x - 1) / 2);

        if (leftSum == rightSum) {
            printf("\nOutput:\n%d\n", x);
            return 0;
        }
    }

    // If no pivot found
    printf("\nOutput:\n-1\n");
    return 0;
}
