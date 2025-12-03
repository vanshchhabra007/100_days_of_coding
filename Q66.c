Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n + 1]; // Extra space for insertion
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int i = n - 1;

    // Shift elements to the right to make space
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert x at correct position
    arr[i + 1] = x;

    // Print updated array
    for (int j = 0; j <= n; j++)
        printf("%d ", arr[j]);

    return 0;
}
