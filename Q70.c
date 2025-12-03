Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    k = k % n;  // handle cases where k > n

    int result[n];
    int index = 0;

    // Copy last k elements to the front
    for (int i = n - k; i < n; i++)
        result[index++] = arr[i];

    // Copy the remaining elements
    for (int i = 0; i < n - k; i++)
        result[index++] = arr[i];

    // Print rotated array
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
