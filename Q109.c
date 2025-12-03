Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size.

#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter value of k: ");
    scanf("%d", &k);

    // If k is larger than array size
    if (k > n) {
        printf("Invalid input! k cannot be greater than array size.\n");
        return 0;
    }

    int windowSum = 0;
    int maxSum;

    // First window sum
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // add new, remove old
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);

    return 0;
}
