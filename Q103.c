Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int totalSum = 0, leftSum = 0;

    // Calculate total sum of array
    for (i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Find pivot index
    for (i = 0; i < n; i++) {
        // Right sum = totalSum - leftSum - nums[i]
        if (leftSum == totalSum - leftSum - nums[i]) {
            printf("\nOutput:\n%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    // If no pivot index found
    printf("\nOutput:\n-1\n");

    return 0;
}
