Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, pos, x;
    scanf("%d", &n);

    int arr[n + 1]; // Extra space for insertion

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &pos, &x); // position and element

    // Shift elements right from the end
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert x at given position
    arr[pos] = x;

    // Print updated array
    for (int i = 0; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}
