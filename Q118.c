Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements (0 to %d, missing one number):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Calculate expected sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate sum of elements in array
    int arraySum = 0;
    for (i = 0; i < n; i++) {
        arraySum += nums[i];
    }

    int missing = totalSum - arraySum;

    printf("\nOutput:\n%d\n", missing);

    return 0;
}
